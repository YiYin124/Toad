#include <stdlib.h>
#include "../Y_List/y_list.h"
#include "samp.h"


List *EventPool[69];

// 初始化事件池
int InitEventPool()
{
	int i = 0;
	for (; i < (sizeof(EventPool) / sizeof(List *)); i++)
	{
		if ((EventPool[i] = newList(sizeof(EVENT))) == NULL)
			return -1; // 事件池初始化失败
	}
	return 1;
}

EVENT_HANDLE RegisterEvent(EVENT_TYPE eventType, EVENT_FUNCTION func, EVENT_PRIORITY priority)
{
	static unsigned int eventID = 0;
	EVENT eventTmp;

	if (eventID == EVENT_NULL)
		return EVENT_NULL; // 不能创建更多的事件了

	eventTmp.eventID = eventID++;
	eventTmp.func = func;

	switch (priority)
	{
	case EVENT_P_HIGH:

		if (ListAddFirst(EventPool[eventType], &eventTmp) == -1)
			return EVENT_NULL; // 添加元素失败

		break;

	case EVENT_P_NORMAL:

		if (EventPool[eventType]->length == 0)
		{
			if (ListAddFirst(EventPool[eventType], &eventTmp) == -1)
				return EVENT_NULL; // 添加元素失败
			break;
		}

		if (ListAdd(EventPool[eventType], (EventPool[eventType]->length / 2) + 1, &eventTmp) == -1)
			return EVENT_NULL; // 添加元素失败 

		break;

	case EVENT_P_LOW:

		if (ListAddLast(EventPool[eventType], &eventTmp) == -1)
			return EVENT_NULL; // 添加元素失败

		break;

	default:
		return EVENT_NULL; // 添加类型错误
	}

	return eventTmp.eventID; // 返回事件句柄
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
				return 1; // 删除成功
			}
		}
	}
	return -1; // 删除失败或无任何注册事件
}