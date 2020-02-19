#include <bodal/bodal.h>

#if(BOSDK_ENABLE_BODAL_DRIVER_MILLIS)

bool millisInit(void)
{
  return true;
}

uint32_t millis(void)
{
  return HAL_GetTick();
}

#endif /* BOSDK_ENABLE_BODAL_DRIVER_MILLIS */
