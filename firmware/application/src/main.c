#include "main.h"
#include "bsp.h"
#include "FreeRTOS.h"
#include "cmsis_os.h"


static void threadMain(void const *arg);

int main(void)
{
  //TODO: bsp init
  bsp_init();

  /* c/cpp machine init & run (instead of python init & run) */

  //TODO: FreeRTOS
  osThreadDef(threadMain, threadMain, osPriorityNormal, 0, configMINIMAL_STACK_SIZE*8);
  if (osThreadCreate(osThread(threadMain), NULL) != NULL){
    //
  }else{
    while(1);
  }

  /* H/W init */
  //TODO: pin
  //TODO: EXTI
  //TODO: Timer
  //TODO: CAN
  //TODO: I2C
  //TODO: SPI
  //TODO: UART
  //TODO: SENSOR
  //TODO: fb_alloc?
  //TODO: file buffer
  //TODO: LCD
  //TODO: py_fir?
  //TODO: py_tv?
  //TODO: Servo
  //TODO: RTC
  //TODO: USB


  /* Start FreeRTOS Kernel */
  osKernelStart();

  for(;;)
  {

  }
}


static void threadMain(void const *arg)
{
  (void)arg;
}
