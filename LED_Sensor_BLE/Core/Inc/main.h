/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

#include "hci_tl_interface.h"
#include "custom.h"
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BSP_BUTTON_EXTI_IRQn EXTI15_10_IRQn
#define BLUENRG_CS_Pin GPIO_PIN_0
#define BLUENRG_CS_GPIO_Port GPIOC
#define BLUENRG_IRQ_Pin GPIO_PIN_3
#define BLUENRG_IRQ_GPIO_Port GPIOA
#define BLUENRG_IRQ_EXTI_IRQn EXTI3_IRQn
#define BLUENRG_MISO_Pin GPIO_PIN_6
#define BLUENRG_MISO_GPIO_Port GPIOA
#define BLUENRG_MOSI_Pin GPIO_PIN_7
#define BLUENRG_MOSI_GPIO_Port GPIOA
#define BLUENRG_RST_Pin GPIO_PIN_13
#define BLUENRG_RST_GPIO_Port GPIOF
#define BLUENRG_CLK_Pin GPIO_PIN_13
#define BLUENRG_CLK_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
