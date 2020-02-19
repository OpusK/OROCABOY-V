#include <bodal/bodal.h>

#if(BOSDK_ENABLE_BODAL_DRIVER_DELAY)

bool delayInit(void)
{
  return true;
}

void delay(uint32_t ms)
{
  HAL_Delay(ms);
}

void delayNs(uint32_t ns)
{

}

void delayUs(uint32_t us)
{
}

void delayMs(uint32_t ms)
{
  HAL_Delay(ms);
}

#endif /* BOSDK_ENABLE_BODAL_DRIVER_DELAY */
