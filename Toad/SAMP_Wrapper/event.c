#include <stdlib.h>
#include "../Y_List/y_list.h"
#include "samp.h"


List *EventPool[69];

// ��ʼ���¼���
int InitEventPool()
{
	int i = 0;
	for (; i < (sizeof(EventPool) / sizeof(List *)); i++)
	{
		if ((EventPool[i] = newList(sizeof(EVENT))) == NULL)
			return -1; // �¼��س�ʼ��ʧ��
	}
	return 1;
}

EVENT_HANDLE RegisterEvent(EVENT_TYPE eventType, EVENT_FUNCTION func, EVENT_PRIORITY priority)
{
	static unsigned int eventID = 0;
	EVENT eventTmp;

	if (eventID == EVENT_NULL)
		return EVENT_NULL; // ���ܴ���������¼���

	eventTmp.eventID = eventID++;
	eventTmp.func = func;

	switch (priority)
	{
	case EVENT_P_HIGH:

		if (ListAddFirst(EventPool[eventType], &eventTmp) == -1)
			return EVENT_NULL; // ���Ԫ��ʧ��

		break;

	case EVENT_P_NORMAL:

		if (EventPool[eventType]->length == 0)
		{
			if (ListAddFirst(EventPool[eventType], &eventTmp) == -1)
				return EVENT_NULL; // ���Ԫ��ʧ��
			break;
		}

		if (ListAdd(EventPool[eventType], (EventPool[eventType]->length / 2) + 1, &eventTmp) == -1)
			return EVENT_NULL; // ���Ԫ��ʧ�� 

		break;

	case EVENT_P_LOW:

		if (ListAddLast(EventPool[eventType], &eventTmp) == -1)
			return EVENT_NULL; // ���Ԫ��ʧ��

		break;

	default:
		return EVENT_NULL; // ������ʹ���
	}

	return eventTmp.eventID; // �����¼����
}

int CancelEvent(EVENT_HANDLE eventHandle)
{
	unsigned int i = 0;
	for (; i < (sizeof(EventPool) / sizeof(List *)); i++)
	{
		unsigned int j = 0;
		for (; j < EventPool[i]->length; j++)
		{
			if (((EVENT *)ListGet(EventPool[i], j))->eventID == eventHandle)
			{
				ListRemove(EventPool[i], j);
				return 1; // ɾ���ɹ�
			}
		}
	}
	return -1; // ɾ��ʧ�ܻ����κ�ע���¼�
}