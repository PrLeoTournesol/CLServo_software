/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWRGD_Pin GPIO_PIN_13
#define PWRGD_GPIO_Port GPIOC
#define nOCTW_Pin GPIO_PIN_14
#define nOCTW_GPIO_Port GPIOC
#define nFAULT_Pin GPIO_PIN_15
#define nFAULT_GPIO_Port GPIOC
#define INLINE_B_Pin GPIO_PIN_0
#define INLINE_B_GPIO_Port GPIOA
#define INLINE_A_Pin GPIO_PIN_1
#define INLINE_A_GPIO_Port GPIOA
#define PVDDSENSE_Pin GPIO_PIN_2
#define PVDDSENSE_GPIO_Port GPIOA
#define INH_C_Pin GPIO_PIN_3
#define INH_C_GPIO_Port GPIOA
#define VREF_Pin GPIO_PIN_4
#define VREF_GPIO_Port GPIOA
#define PROTEC_REF_Pin GPIO_PIN_5
#define PROTEC_REF_GPIO_Port GPIOA
#define ASENSE_V_Pin GPIO_PIN_0
#define ASENSE_V_GPIO_Port GPIOB
#define BSENSE_V_Pin GPIO_PIN_1
#define BSENSE_V_GPIO_Port GPIOB
#define M_PWM_Pin GPIO_PIN_2
#define M_PWM_GPIO_Port GPIOB
#define INH_B_Pin GPIO_PIN_10
#define INH_B_GPIO_Port GPIOB
#define THERMISTOR_Pin GPIO_PIN_11
#define THERMISTOR_GPIO_Port GPIOB
#define S02_Pin GPIO_PIN_12
#define S02_GPIO_Port GPIOB
#define CSENSE_V_Pin GPIO_PIN_13
#define CSENSE_V_GPIO_Port GPIOB
#define S01_Pin GPIO_PIN_14
#define S01_GPIO_Port GPIOB
#define M_OC_Pin GPIO_PIN_15
#define M_OC_GPIO_Port GPIOB
#define DC_CAL_Pin GPIO_PIN_8
#define DC_CAL_GPIO_Port GPIOA
#define EN_GATE_Pin GPIO_PIN_9
#define EN_GATE_GPIO_Port GPIOA
#define SPI1_SS_Pin GPIO_PIN_10
#define SPI1_SS_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define INL_C_Pin GPIO_PIN_15
#define INL_C_GPIO_Port GPIOA
#define INL_B_Pin GPIO_PIN_4
#define INL_B_GPIO_Port GPIOB
#define INL_A_Pin GPIO_PIN_5
#define INL_A_GPIO_Port GPIOB
#define INH_A_Pin GPIO_PIN_7
#define INH_A_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
