/**
 * Copyright (c) 2011-2016, Jack Mo (mobangjack@foxmail.com).
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
 
#include "main.h"

int main()
{
	KOS_Boot();
	while(1)
	{
		if (Clk_GetMsTick() % 250 == 0) {
			LED_GREEN_TOG();
			//Dbg_Mec();
			//Dbg_Pid();
			//Dbg_Dci();
			//Dbg_Odo();
			//Dbg_Cmd();
			//Dbg_Wsm();
			//Dbg_Wdg();
		}
  }
}
