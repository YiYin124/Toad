/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*/

#pragma once


// 注册事件
EVENT_HANDLE RegisterEvent(EVENT_TYPE eventType, EVENT_FUNCTION func, EVENT_PRIORITY priority);

// 注销事件
int CancelEvent(EVENT_HANDLE eventHandle);

