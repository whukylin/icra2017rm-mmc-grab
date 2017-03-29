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
 
#ifndef __SR04_H__
#define __SR04_H__

#ifdef __cplusplus
extern "C" {
#endif
	
#include "stm32util.h"
	
typedef struct
{
	GPIO trigPin;
	GPIO echoPin;
}SR04_t;

#define SR04_NUM 2

#define SR04_FIXED \
{ \
	.trigPin = PA4, \
	.echoPin = PA5, \
}

#define SR04_MOBLE \
{ \
	.trigPin = PI9, \
	.echoPin = PF10, \
}

#define SR04_GROUP \
{ \
	SR04_FIXED, \
	SR04_MOBLE, \
}

#define SR04_NVIC_PRE_PRIORITY 1
#define SR04_NVIC_SUB_PRIORITY 0

#define SR04_FIXED_EXTI EXTI5_IRQn
#define SR04_MOBLE_EXTI EXTI15_10_IRQn

#define SR04_FIXED_EXTI_LINE EXTI_Line5
#define SR04_MOBLE_EXTI_LINE EXTI_Line10

#define SR04_MOBLE_EXTI_LINE EXTI_Line10

void SR04_Bind(const SR04_t* sr04);

void SR04_Config(void);

extern const SR04_t sr04[SR04_NUM];

#ifdef __cplusplus
}
#endif

#endif
