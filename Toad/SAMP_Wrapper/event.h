/**
* Copyright (C) 2013 YiYin
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* version 3.0 of the License as published by the Free Software Foundation.
*/

#pragma once


// ע���¼�
EVENT_HANDLE RegisterEvent(EVENT_TYPE eventType, EVENT_FUNCTION func, EVENT_PRIORITY priority);

// ע���¼�
int CancelEvent(EVENT_HANDLE eventHandle);

