#ifndef BOSDK_CONFIG_H_
#define BOSDK_CONFIG_H_


/* BOSDK BODAL CORE OPTIONS (Comment out any undefined features) */
// #define BOSDK_ENABLE_BODAL_CORE_ADC   0
  // #define HW_ADC_MAX_CHANNEL 1
// #define BOSDK_ENABLE_BODAL_CORE_CAN   0
  // #define HW_CAN_MAX_CHANNEL 1
  // #define HW_CAN_MSG_RX_BUF_MAX 1
  // #define HW_CAN_DATA_RX_BUF_MAX 1
// #define BOSDK_ENABLE_BODAL_CORE_DAC   0
  // #define HW_DAC_MAX_CHANNEL 1
// #define BOSDK_ENABLE_BODAL_CORE_EXTI  0
  // #define HW_EXTI_MAX_CHANNEL 1
// #define BOSDK_ENABLE_BODAL_CORE_FLASH 0
 #define BOSDK_ENABLE_BODAL_CORE_GPIO  1
   #define HW_GPIO_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_CORE_I2C   0
  // #define HW_I2C_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_CORE_PWM   0
  // #define HW_PWM_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_CORE_RESET 0
// #define BOSDK_ENABLE_BODAL_CORE_SPI   0
  // #define HW_SPI_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_CORE_TIMER 0
  // #define HW_TIMER_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_CORE_UART  0
  // #define HW_UART_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_CORE_VCP   0


/* BOSDK BODAL DRIVER OPTIONS (Comment out any undefined features) */
// #define BOSDK_ENABLE_BODAL_DRIVER_BUTTON   0
  // #define HW_BUTTON_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_DRIVER_BUZZER   0
// #define BOSDK_ENABLE_BODAL_DRIVER_DELAY    0
// #define BOSDK_ENABLE_BODAL_DRIVER_EEPROM   0
// #define BOSDK_ENABLE_BODAL_DRIVER_ENCODER  0
// #define BOSDK_ENABLE_BODAL_DRIVER_LED      0
  // #define HW_LED_MAX_CH 1
// #define BOSDK_ENABLE_BODAL_DRIVER_MICROS   0
// #define BOSDK_ENABLE_BODAL_DRIVER_MILLIS   0
// #define BOSDK_ENABLE_BODAL_DRIVER_SWTIMER  0
  // #define HW_SWTIMER_MAX_CH 1


/* BOSDK UTIL OPTIONS (Comment out any undefined features) */
// #define BOSDK_ENABLE_UTIL_BOOTCMD   0
// #define BOSDK_ENABLE_UTIL_CMD       0
  // #define _HW_DEF_CMD_MAX_DATA_LENGTH 1
// #define BOSDK_ENABLE_UTIL_CMDIF     0
// #define BOSDK_ENABLE_UTIL_CTABLE    0
// #define BOSDK_ENABLE_UTIL_LOG       0
// #define BOSDK_ENABLE_UTIL_QBUFFER   0
// #define BOSDK_ENABLE_UTIL_RING      0




#endif /* BOSDK_CONFIG_H_ */
