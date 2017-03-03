/**
 * Copyright (c) 2016, Jack Mo (mobangjack@foxmail.com).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef __WSM_H__
#define __WSM_H__

/**********************************************/
/*           Working State Machine            */
/**********************************************/

#ifdef __cplusplus
extern "C" {
#endif

#include "sys.h"
#include "ini.h"
#include "wdg.h"
#include "cfg.h"
	
void Wsm_Init(void);
void Wsm_Proc(void);

WorkingState_t Wsm_GetWorkingState(void);
WorkingState_t Wsm_GetLastWorkingState(void);

#ifdef __cplusplus
}
#endif

#endif

