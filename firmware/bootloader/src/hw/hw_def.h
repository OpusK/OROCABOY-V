/*
 * hw_def.h
 *
 *  Created on: 2020. 1. 21.
 *      Author: Baram
 */

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "def.h"
#include "bsp.h"



#define _USE_HW_DELAY
#define _USE_HW_MILLIS
#define _USE_HW_FLASH
#define _USE_HW_SD
#define _USE_HW_FATFS



#define _USE_HW_RTC
#define      HW_RTC_CFG_DATA_1      RTC_BKP_DR1
#define      HW_RTC_CFG_DATA_2      RTC_BKP_DR2

#define _USE_HW_RESET
#define      HW_RESET_BOOT_CNT      RTC_BKP_DR3
#define      HW_RESET_BOOT_MODE     RTC_BKP_DR4
#define      HW_RESET_BOOT_SRC      RTC_BKP_DR5


#define _USE_HW_LED
#define      HW_LED_MAX_CH          3

#define _USE_HW_UART
#define      HW_UART_MAX_CH         2

#define _USE_HW_VCP
#define _USE_HW_USB
#define      HW_USE_CDC             1
#define      HW_USE_MSC             0

#define _USE_HW_GPIO
#define      HW_GPIO_MAX_CH         1


#define _USE_HW_SWTIMER
#define      HW_SWTIMER_MAX_CH      8


#define _USE_HW_CMDIF
#define      HW_CMDIF_LIST_MAX              32
#define      HW_CMDIF_CMD_STR_MAX           16
#define      HW_CMDIF_CMD_BUF_LENGTH        128


#define _USE_HW_CMD
#define      HW_CMD_MAX_DATA_LENGTH         2048




#define _PIN_GPIO_SDCARD_DETECT     0





#define FLASH_ADDR_TAG                0x08040000
#define FLASH_ADDR_FW                 0x08040400

#define FLASH_ADDR_START              0x08040000
#define FLASH_ADDR_END                0x08200000

#define FLASH_ADDR_BOOT_START         0x08000000
#define FLASH_ADDR_BOOTEND            (0x08000000 + 128*1024)



#endif /* SRC_HW_HW_DEF_H_ */
