/*
 * Copyright (C) 2013 YiYin
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * version 3.0 of the License as published by the Free Software Foundation.
 */

#include <stdlib.h>
#include "y_list.h"

static int ElementClone(Element *dest, Element src, int len)
{
	void *tmp;
	if ((*dest = malloc(len)) == NULL )
		return -1; // δ���뵽�ڴ�
	tmp = *dest;
	do
	{
		*(char *) tmp = *(char *) src;
		tmp = (char *)tmp + 1;
		src = (char *)src + 1;
	} while (len--);
	return 1;
}

List *newList(const int size)
{
	List *list;
	if ((list = (List *) malloc(sizeof(List))) == NULL )
		return NULL ; // δ���뵽�ڴ�
	list->node = NULL;
	list->size = size;
	list->length = 0;
	return list;
}

int ListIterator(const List *src, const IterFunc iterator,
		const IterEndFunc endIterator)
{
	int index = 0;
	ListNode *node = src->node;

	while (node != NULL )
	{
		iterator(index, node->e);
		node = node->next;
		index++;
	}
	return endIterator();
}

int ListAddFirst(List *dest, const Element e)
{
	if (dest->length == UINT_MAX)
		return -1; // �������

	if (dest->node == NULL )
	{
		if ((dest->node = (ListNode *) malloc(sizeof(ListNode))) == NULL )
			return -1; // δ���뵽�ڴ�

		if (ElementClone(&(dest->node->e), e, dest->size) == -1)
			return -1; // δ���뵽�ڴ�

		dest->node->prev = NULL;
		dest->node->next = NULL;
		dest->length++;
		return 1;
	}

	if ((dest->node->prev = (ListNode *) malloc(sizeof(ListNode))) == NULL )
		return -1; // δ���뵽�ڴ�

	if (ElementClone(&(dest->node->prev->e), e, dest->size) == -1)
		return -1; // δ���뵽�ڴ�

	dest->node->prev->prev = NULL;
	dest->node->prev->next = dest->node;
	dest->node = dest->node->prev;
	dest->length++;
	return 1;
}

int ListAddLast(List *dest, const Element e)
{
	ListNode *node = dest->node;

	if (dest->length == UINT_MAX)
		return -1; // �������

	if (dest->node == NULL )
	{
		if ((dest->node = (ListNode *) malloc(sizeof(ListNode))) == NULL )
			return -1; // δ���뵽�ڴ�

		if (ElementClone(&(dest->node->e), e, dest->size) == -1)
			return -1; // δ���뵽�ڴ�

		dest->node->prev = NULL;
		dest->node->next = NULL;
		dest->length++;
		return 1;
	}

	while (1)
	{
		if (node->next == NULL )
			break;
		else
			node = node->next;
	}

	if ((node->next = (ListNode *) malloc(sizeof(ListNode))) == NULL )
		return -1; // δ���뵽�ڴ�

	if (ElementClone(&(node->next->e), e, dest->size) == -1)
		return -1; // δ���뵽�ڴ�

	node->next->prev = node;
	node->next->next = NULL;
	dest->length++;
	return 1;
}

int ListAdd(List *dest, unsigned int index, const Element e)
{
	ListNode *node = dest->node;
	ListNode *addNode;

	if (dest->length == UINT_MAX)
		return -1; // �������

	if (index > dest->length)
		return -1; // �����ַ������Χ
	else if (index == 0)
		return ListAddFirst(dest, e);
	else if (index == dest->length)
		return ListAddLast(dest, e);

	while (index--)
	{
		node = node->next;
	}

	if ((addNode = (ListNode *) malloc(sizeof(ListNode))) == NULL )
		return -1; // δ���뵽�ڴ�

	if (ElementClone(&(addNode->e), e, dest->size) == -1)
		return -1; // δ���뵽�ڴ�

	addNode->next = node;
	addNode->prev = node->prev;
	node->prev->next = addNode;
	node->prev = addNode;
	dest->length++;
	return 1;
}

int ListRemoveFirst(List *dest)
{
	ListNode *node = dest->node;

	if (dest->node == NULL )
		return -1; // �˱�Ϊ��

	dest->node = node->next;

	if (dest->node != NULL )
		dest->node->prev = node->prev;

	free(node->e);
	free(node);
	dest->length--;
	return 1;
}

int ListRemoveLast(List *dest)
{
	ListNode *node = dest->node;

	if (dest->node == NULL )
		return -1; // �˱�Ϊ��

	while (1)
	{
		if (node->next == NULL )
			break;
		else
			node = node->next;
	}

	if (node->prev == NULL )
		dest->node = NULL;
	else
		node->prev->next = NULL;

	free(node->e);
	free(node);
	dest->length--;
	return 1;
}

int ListRemove(List *dest, unsigned int index)
{
	ListNode *node = dest->node;

	if (node == NULL || index >= dest->length)
		return -1; // ɾ����ַ������Χ �� �ձ�
	else if (index == 0)
		return ListRemoveFirst(dest);
	else if (index == dest->length - 1)
		return ListRemoveLast(dest);

	while (index--)
	{
		node = node->next;
	}

	node->prev->next = node->next;
	node->next->prev = node->prev;

	free(node->e);
	free(node);
	dest->length--;
	return 1;
}

int ListSetFirst(List *dest, const Element e)
{
	Element tmp;
	if (dest->node == NULL )
		return -1; // �˱�Ϊ��

	tmp = dest->node->e;
	if (ElementClone(&(dest->node->e), e, dest->size) == -1)
		return -1; // δ���뵽�ڴ�

	free(tmp);
	return 1;
}

int ListSetLast(List *dest, const Element e)
{
	ListNode *node = dest->node;
	Element tmp;
	if (dest->node == NULL )
		return -1; // �˱�Ϊ��

	while (1)
	{
		if (node->next == NULL )
			break;
		else
			node = node->next;
	}

	tmp = node->e;
	if (ElementClone(&(node->e), e, dest->size) == -1)
		return -1; // δ���뵽�ڴ�

	free(tmp);
	return 1;
}

int ListSet(List *dest, unsigned int index, const Element e)
{
	ListNode *node = dest->node;
	Element tmp;

	if (node == NULL || index >= dest->length)
		return -1; // ���õ�ַ������Χ �� �ձ�

	while (index--)
	{
		node = node->next;
	}

	tmp = node->e;
	if (ElementClone(&(node->e), e, dest->size) == -1)
		return -1; // δ���뵽�ڴ�

	free(tmp);
	return 1;
}

Element ListGetFirst(const List *src)
{
	if (src->node == NULL )
		return NULL ; // �˱�Ϊ��
	return src->node->e;
}

Element ListGetLast(const List *src)
{
	ListNode *node = src->node;

	if (src->node == NULL )
		return NULL ; // �˱�Ϊ��

	while (1)
	{
		if (node->next == NULL )
			break;
		else
			node = node->next;
	}

	return node->e;
}

Element ListGet(const List *src, unsigned int index)
{
	ListNode *node = src->node;

	if (node == NULL || index >= src->length)
		return NULL ; // ���õ�ַ������Χ �� �ձ�

	while (index--)
	{
		node = node->next;
	}

	return node->e;
}

Element ListPop(List *dest)
{
	Element tmp = ListGetFirst(dest);
	ListRemoveFirst(dest);
	return tmp;
}

int ListClone(List **dest, const List *src)
{
	unsigned int i = 0;
	if ((*dest = newList(src->size)) == NULL )
		return -1; // ��������ʧ��

	for (i = 0; i < src->length; i++)
	{
		if (ListAdd(*dest, i, ListGet(src, i)) == -1)
			return -1; // ���Ԫ��ʧ��
	}
	return 1;
}

void ListClear(List *dest)
{
	while (dest->length)
		ListRemoveFirst(dest);
	free(dest);
}

int ListLink(List *dest, const List *src)
{
	unsigned int i = 0;

	if (dest->size != src->size)
		return -1; // ������С��ͬ��������

	for (i = 0; i < src->length; i++)
	{
		if (ListAddLast(dest, ListGet(src, i)) == -1)
			return -1; // ���Ԫ��ʧ��
	}
	return 1;
}
