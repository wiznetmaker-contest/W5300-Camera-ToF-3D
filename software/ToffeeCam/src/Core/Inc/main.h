/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32u5xx_hal.h"

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
int cmain(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ETH_BUS_nRST_Pin GPIO_PIN_2
#define ETH_BUS_nRST_GPIO_Port GPIOE
#define ETH_BUS_nINT_Pin GPIO_PIN_3
#define ETH_BUS_nINT_GPIO_Port GPIOE
#define CAM_D4_Pin GPIO_PIN_4
#define CAM_D4_GPIO_Port GPIOE
#define CAM_D6_Pin GPIO_PIN_5
#define CAM_D6_GPIO_Port GPIOE
#define CAM_D7_Pin GPIO_PIN_6
#define CAM_D7_GPIO_Port GPIOE
#define DUMMY1_Pin GPIO_PIN_6
#define DUMMY1_GPIO_Port GPIOF
#define DUMMY2_Pin GPIO_PIN_7
#define DUMMY2_GPIO_Port GPIOF
#define DUMMY3_Pin GPIO_PIN_8
#define DUMMY3_GPIO_Port GPIOF
#define DUMMY4_Pin GPIO_PIN_9
#define DUMMY4_GPIO_Port GPIOF
#define DUMMY5_Pin GPIO_PIN_10
#define DUMMY5_GPIO_Port GPIOF
#define CAM_I2C_SCL_Pin GPIO_PIN_0
#define CAM_I2C_SCL_GPIO_Port GPIOC
#define CAM_I2C_SDA_Pin GPIO_PIN_1
#define CAM_I2C_SDA_GPIO_Port GPIOC
#define CAM_nRESET_Pin GPIO_PIN_3
#define CAM_nRESET_GPIO_Port GPIOC
#define CAM_HSYNC_Pin GPIO_PIN_4
#define CAM_HSYNC_GPIO_Port GPIOA
#define CAM_PCLK_Pin GPIO_PIN_6
#define CAM_PCLK_GPIO_Port GPIOA
#define ETH_MEDIA_SELECT_Pin GPIO_PIN_4
#define ETH_MEDIA_SELECT_GPIO_Port GPIOC
#define BUTTON_Pin GPIO_PIN_1
#define BUTTON_GPIO_Port GPIOB
#define ETH_BUS_D4_Pin GPIO_PIN_7
#define ETH_BUS_D4_GPIO_Port GPIOE
#define ETH_BUS_D5_Pin GPIO_PIN_8
#define ETH_BUS_D5_GPIO_Port GPIOE
#define ETH_BUS_D6_Pin GPIO_PIN_9
#define ETH_BUS_D6_GPIO_Port GPIOE
#define ETH_BUS_D7_Pin GPIO_PIN_10
#define ETH_BUS_D7_GPIO_Port GPIOE
#define SPE_SPI1_SCK_Pin GPIO_PIN_13
#define SPE_SPI1_SCK_GPIO_Port GPIOE
#define SPE_SPI1_MISO_Pin GPIO_PIN_14
#define SPE_SPI1_MISO_GPIO_Port GPIOE
#define SPE_SPI1_MOSI_Pin GPIO_PIN_15
#define SPE_SPI1_MOSI_GPIO_Port GPIOE
#define SPE_nRESET_Pin GPIO_PIN_10
#define SPE_nRESET_GPIO_Port GPIOB
#define TOF_1_LPn_Pin GPIO_PIN_12
#define TOF_1_LPn_GPIO_Port GPIOB
#define TOF_I2C1_RST_Pin GPIO_PIN_11
#define TOF_I2C1_RST_GPIO_Port GPIOD
#define ETH_BUS_D0_Pin GPIO_PIN_14
#define ETH_BUS_D0_GPIO_Port GPIOD
#define ETH_BUS_D1_Pin GPIO_PIN_15
#define ETH_BUS_D1_GPIO_Port GPIOD
#define MCU_STATUS_1_Pin GPIO_PIN_3
#define MCU_STATUS_1_GPIO_Port GPIOG
#define CAM_D0_Pin GPIO_PIN_6
#define CAM_D0_GPIO_Port GPIOC
#define CAM_D1_Pin GPIO_PIN_7
#define CAM_D1_GPIO_Port GPIOC
#define TOF_2_LPn_Pin GPIO_PIN_15
#define TOF_2_LPn_GPIO_Port GPIOA
#define TOF_3_LPn_Pin GPIO_PIN_10
#define TOF_3_LPn_GPIO_Port GPIOC
#define TOF_4_LPn_Pin GPIO_PIN_11
#define TOF_4_LPn_GPIO_Port GPIOC
#define TOF_nPWDN_Pin GPIO_PIN_12
#define TOF_nPWDN_GPIO_Port GPIOC
#define ETH_BUS_D2_Pin GPIO_PIN_0
#define ETH_BUS_D2_GPIO_Port GPIOD
#define ETH_BUS_D3_Pin GPIO_PIN_1
#define ETH_BUS_D3_GPIO_Port GPIOD
#define ETH_BUS_nRD_Pin GPIO_PIN_4
#define ETH_BUS_nRD_GPIO_Port GPIOD
#define ETH_BUS_nWR_Pin GPIO_PIN_5
#define ETH_BUS_nWR_GPIO_Port GPIOD
#define ETH_BUS_nCS_Pin GPIO_PIN_7
#define ETH_BUS_nCS_GPIO_Port GPIOD
#define TOF_I2C2_RST_Pin GPIO_PIN_12
#define TOF_I2C2_RST_GPIO_Port GPIOG
#define TOF_5_LPn_Pin GPIO_PIN_4
#define TOF_5_LPn_GPIO_Port GPIOB
#define MCU_STATUS_2_Pin GPIO_PIN_5
#define MCU_STATUS_2_GPIO_Port GPIOB
#define CAM_D5_Pin GPIO_PIN_6
#define CAM_D5_GPIO_Port GPIOB
#define CAM_VSYNC_Pin GPIO_PIN_7
#define CAM_VSYNC_GPIO_Port GPIOB
#define TOF_6_LPn_Pin GPIO_PIN_3
#define TOF_6_LPn_GPIO_Port GPIOH
#define TOF_7_LPn_Pin GPIO_PIN_8
#define TOF_7_LPn_GPIO_Port GPIOB
#define CAM_XCLK_Pin GPIO_PIN_9
#define CAM_XCLK_GPIO_Port GPIOB
#define CAM_D2_Pin GPIO_PIN_0
#define CAM_D2_GPIO_Port GPIOE
#define CAM_D3_Pin GPIO_PIN_1
#define CAM_D3_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
