/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*/

#include "toadAMX.h"

char* _amx_GetString(AMX *amx, const cell str, char *dest, int size)//BY MK 124
{
	cell *phys;

	amx_GetAddr(amx, str, &phys);
	amx_GetString(dest, phys, 0, size);

	return dest;
}

cell amx_CallNativeFunc(AMX *amx, const char * funcName, const char * typeList, ...)
{
	va_list vaList;
	cell reVal = -1;

	int index;
	AMX_NATIVE func;

	cell * args;
	cell ** phys;

	int listLen = strlen(typeList);
	int argsNum = 0;
	unsigned int i = 0;

	while (*typeList != '\0')
	{
		if (*typeList == 'i' || *typeList == 'I' || *typeList == 'f' || *typeList == 'F' || *typeList == 's' || *typeList == 'S')
			argsNum++;
		typeList++;
	}
	typeList -= listLen;

	args = (cell*)malloc(sizeof(cell) * (argsNum + 1));
	phys = (cell**)malloc(sizeof(cell*) * argsNum);

	amx_FindNative( amx, funcName, &index);
	func =  (AMX_NATIVE)(((AMX_FUNCSTUB *)(amx->base + ((AMX_HEADER *)amx->base)->natives + (((AMX_HEADER *)amx->base)->defsize * index)))->address);

	*args = argsNum; args++;

	va_start(vaList, typeList);

	while (*typeList != '\0')
	{
		switch (*typeList)
		{
		case 'i':
			args[i] = va_arg(vaList, int);
			break;
		case 'f':
			{
				float ftmp;
				ftmp = (float)va_arg(vaList, double);
				args[i] = amx_ftoc(ftmp);
				break;
			}
		case 's':
			{
				char *stmp = va_arg(vaList, char*);
				unsigned int slen = strlen(stmp) + 1;
				amx_Allot(amx, slen, &args[i], &phys[i]);
				amx_SetString(phys[i], stmp, 0, 0, slen);
				break;
			}

		case 'S':
			if (typeList[1] == '[' && typeList[2] >= '0' && typeList[2] <= '9')
			{
				int j = 2;
				unsigned int slen = 0;

				while (typeList[j] != '\0' && typeList[j] != ']' && typeList[j] >= '0' && typeList[j] <= '9')
				{
					slen = typeList[j] - '0' + slen * 10; j++;
				}

				if (typeList[j] != ']')
				{
					return reVal;
				}

				amx_Allot(amx, slen, &args[i], &phys[i]);
				amx_SetString(phys[i], va_arg(vaList, char*), 0, 0, slen);
				typeList += j;
			}
			else
			{
				return reVal;
			}
			break;
		case 'F':
			amx_Allot(amx, 1, &args[i], &phys[i]);
			break;
		case 'I':
			amx_Allot(amx, 1, &args[i], &phys[i]);
			break;
		default:
			return reVal;
		}
		typeList++; i++;
	}

	typeList -= listLen;
	va_end(vaList);

	args--; reVal = func(amx, args); args++;

	va_start(vaList, typeList);

	i = 0;
	while (*typeList != '\0')
	{
		switch (*typeList)
		{
		case 'i':
			va_arg(vaList, int);
			break;
		case 'f':
			va_arg(vaList, double);
			break;
		case 's':
			{
				amx_Release(amx, args[i]);
				break;
			}

		case 'S':
			if (typeList[1] == '[' && typeList[2] >= '0' && typeList[2] <= '9')
			{
				int j = 2;
				unsigned int slen = 0;

				while (typeList[j] != '\0' && typeList[j] != ']' && typeList[j] >= '0' && typeList[j] <= '9')
				{
					slen = typeList[j] - '0' + slen * 10; j++;
				}

				if (typeList[j] != ']')
				{
					return reVal;
				}

				amx_GetString(va_arg(vaList, char*), phys[i], 0, slen);
				amx_Release(amx, args[i]);
				typeList += j;
			}
			else
			{
				return reVal;
			}
			break;
		case 'F':
			*va_arg(vaList, float*) = amx_ctof(*phys[i]);
			amx_Release(amx, args[i]);
			break;
		case 'I':
			*va_arg(vaList, int*) = *phys[i];
			amx_Release(amx, args[i]);
			break;
		default:
			return reVal;
		}

		typeList++; i++;
	}
	va_end(vaList);

	args--; free(args);
	free(phys);

	return reVal;
}