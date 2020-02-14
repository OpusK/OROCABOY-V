/*
 * ap.cpp
 *
 *  Created on: 2020. 1. 21.
 *      Author: Baram
 */




#include "ap.h"
#include "boot/boot.h"



#define BOOT_MODE_JUMP_FW     0
#define BOOT_MODE_LOADER      1
#define BOOT_MODE_CMDIF       2
#define BOOT_MODE_ROMBOOT     3


uint8_t boot_mode = BOOT_MODE_LOADER;

static cmd_t cmd_boot;


extern "C" int gnuboyFiler();


void apInit(void)
{
  uint8_t boot_param;


  hwInit();

  cmdifOpen(_DEF_UART2, 57600);

  cmdInit(&cmd_boot);
  cmdBegin(&cmd_boot, _DEF_UART2, 57600);


  boot_mode = resetGetCount();
  boot_param = rtcReadBackupData(HW_RESET_BOOT_MODE);


  if (boot_param & (1<<7))
  {
    boot_mode = BOOT_MODE_LOADER;
    boot_param &= ~(1<<7);
    rtcWriteBackupData(HW_RESET_BOOT_MODE, boot_param);
  }

  switch(boot_mode)
  {
    case BOOT_MODE_LOADER:
    case BOOT_MODE_CMDIF:
      logPrintf("boot begin...\r\n");
      break;

    case BOOT_MODE_ROMBOOT:
      logPrintf("jump system boot...\r\n");
      delay(100);
      resetToSysBoot();
      break;

    default:
      logPrintf("jump fw...\r\n");

      if (bootVerifyCrc() != true)
      {
        logPrintf("fw crc    \t\t: Fail\r\n");
        logPrintf("boot begin...\r\n");

        boot_mode = BOOT_MODE_LOADER;
      }
      else
      {
        delay(100);
        bootJumpToFw();
      }

      break;
  }

  usbInit();
  usbBegin(USB_CDC_MODE);
  vcpInit();
}

void apMain(void)
{
  uint32_t pre_time;

  while(1)
  {
    if (boot_mode == BOOT_MODE_LOADER)
    {
      if (cmdReceivePacket(&cmd_boot) == true)
      {
        bootProcessCmd(&cmd_boot);
      }
    }
    else
    {
      cmdifMain();
    }


    if (millis()-pre_time >= 100)
    {
      pre_time = millis();
      if (boot_mode == BOOT_MODE_LOADER)
      {
        ledToggle(_DEF_LED1);
      }
      else
      {
        ledOn(_DEF_LED1);
      }
    }
  }
}





