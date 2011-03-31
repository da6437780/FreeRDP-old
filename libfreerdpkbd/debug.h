/*
   FreeRDP: A Remote Desktop Protocol client.
   Microsoft Locale Definitions and Conversion Tables

   Copyright 2009 Marc-Andre Moreau <marcandre.moreau@gmail.com>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __DEBUG_H
#define __DEBUG_H

#include "config.h"

#ifdef WITH_DEBUG_KBD
#define DEBUG_KBD(fmt, ...) printf("DBG (KBD) %s (%d): " fmt, __FUNCTION__, __LINE__, ## __VA_ARGS__)
#else
#define DEBUG_KBD(fmt, ...) do { } while (0)
#endif

#endif
