#include <string.h>
#include <stdarg.h>
#include <stdio.h>

#include "samp_amx.h"

typedef void (*logprintf_t)(char* format, ...);

logprintf_t logprintf;
AMX *pAMX = NULL;
extern void *pAMXFunctions;


cell amx_CallNativeFunc(const char * funcName, const char * typeList, ...)
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

	amx_FindNative( pAMX, funcName, &index);
	func =  (AMX_NATIVE)(((AMX_FUNCSTUB *)(pAMX->base + ((AMX_HEADER *)pAMX->base)->natives + (((AMX_HEADER *)pAMX->base)->defsize * index)))->address);

	*args = argsNum; args++;

	logprintf("Format : {%s}[%d]", typeList, argsNum);
	va_start(vaList, typeList);

	while (*typeList != '\0')
	{
		logprintf("TYPE (%c)", *typeList);
		switch (*typeList)
		{
		case 'i':
			args[i] = va_arg(vaList, int);
			logprintf("input (int) %d", args[i]);
			break;
		case 'f':
			{
				float ftmp;
				ftmp = (float)va_arg(vaList, double);
				args[i] = amx_ftoc(ftmp);
				logprintf("input (float) %f", amx_ctof(args[i]));
				break;
			}
		case 's':
			{
				char *stmp = va_arg(vaList, char*);
				unsigned int slen = strlen(stmp) + 1;
				amx_Allot(pAMX, slen, &args[i], &phys[i]);
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
					logprintf("[Toad]Parameter list error[2].");
					return reVal;
				}

				amx_Allot(pAMX, slen, &args[i], &phys[i]);
				amx_SetString(phys[i], va_arg(vaList, char*), 0, 0, slen);
				typeList += j;
			}
			else
			{
				logprintf("[Toad]Parameter list error[1].");
				return reVal;
			}
			break;
		case 'F':
			amx_Allot(pAMX, 1, &args[i], &phys[i]);
			break;
		case 'I':
			amx_Allot(pAMX, 1, &args[i], &phys[i]);
			break;
		default:
			logprintf("[Toad]Parameter list error[0].");
			return reVal;
		}
		typeList++; i++;
	}

	typeList -= listLen;
	va_end(vaList);

	args--; reVal = func(pAMX, args); args++;

	va_start(vaList, typeList);

	i = 0;
	while (*typeList != '\0')
	{
		logprintf("TYPE (%c)", *typeList);
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
				amx_Release(pAMX, args[i]);
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
					logprintf("[Toad]Parameter list error[2].");
					return reVal;
				}

				amx_GetString(va_arg(vaList, char*), phys[i], 0, slen);
				amx_Release(pAMX, args[i]);
				typeList += j;
			}
			else
			{
				logprintf("[Toad]Parameter list error[1].");
				return reVal;
			}
			break;
		case 'F':
			*va_arg(vaList, float*) = amx_ctof(*phys[i]);
			amx_Release(pAMX, args[i]);
			break;
		case 'I':
			*va_arg(vaList, int*) = *phys[i];
			amx_Release(pAMX, args[i]);
			break;
		default:
			logprintf("[Toad]Parameter list error[0].");
			return reVal;
		}

		typeList++; i++;
	}
	va_end(vaList);

	args--; free(args);
	free(phys);

	return reVal;
}

int print(char* str)
{
	return amx_CallNativeFunc(__FUNCTION__, "s", str);
}

int getdate(int* year, int* month, int* day)
{
	return amx_CallNativeFunc(__FUNCTION__, "III", year, month, day);
}

int GetVehiclePos(int vehicleid, float* x, float* y, float* z)
{
	return amx_CallNativeFunc(__FUNCTION__, "iFFF", vehicleid, x, y, z);
}

int GetPlayerName(int playerid, const char name[], int len)
{
	return amx_CallNativeFunc(__FUNCTION__, "iS[24]i", 0, name, len);
}

cell AMX_NATIVE_CALL HelloWorld(AMX* amx, const cell* params)
{
	int year, month, day;
	float x, y, z;
	char name[24];
	print("[C] TEST");
	GetPlayerName(0, name, sizeof(name));
	logprintf("[NAME] %s", name);
	getdate(&year, &month, &day);
	logprintf("[DATE]%d/%d/%d", year, month, day);
	GetVehiclePos(1, &x, &y, &z);
	logprintf("[VehPos] %f, %f, %f", x, y, z);
	return 1;
}

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() 
{
	return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES;
}

PLUGIN_EXPORT int PLUGIN_CALL Load(void **ppData) 
{
	pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
	logprintf = (logprintf_t) ppData[PLUGIN_DATA_LOGPRINTF];

	logprintf(" * Toad plugin was loaded.");
	return 1;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	logprintf(" * Toad plugin was unloaded.");
}

AMX_NATIVE_INFO PluginNatives[] =
{
	{"HelloWorld", HelloWorld},
	{NULL, NULL}
};

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad( AMX *amx ) 
{
	if (amx_Register(amx, PluginNatives, -1) == AMX_ERR_NOTFOUND)
		logprintf("[ERR] 'AMX_ERR_NOTFOUND'");
	pAMX = amx;
	return AMX_ERR_NONE;
}


PLUGIN_EXPORT int PLUGIN_CALL AmxUnload( AMX *amx ) 
{
	return AMX_ERR_NONE;
}