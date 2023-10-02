#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Delay_interface.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"

int main(void)
{
   MRCC_vInitSystemCLK();
   MRCC_vEnableClock(AHB1_BUS, _PERIPHERAL_EN_GPIOA);

   MGPIO_voidSetPinMode(_GPIOA_PORT, _PIN_1, _MODE_OUTPUT);
   MGPIO_voidSetPinOutPutType(_GPIOA_PORT, _PIN_1, _OUTPUT_TYPE_PUSH_PULL);
   MGPIO_voidSetPinOutSpeed(_GPIOA_PORT, _PIN_1, _OUTPUT_SPEED_MEDUIM);
   MGPIO_voidSetPullType(_GPIOA_PORT, _PIN_1, _PULL_OFF);

   MGPIO_voidSetPinMode(_GPIOA_PORT, _PIN_2, _MODE_OUTPUT);
   MGPIO_voidSetPinOutPutType(_GPIOA_PORT, _PIN_2, _OUTPUT_TYPE_PUSH_PULL);
   MGPIO_voidSetPinOutSpeed(_GPIOA_PORT, _PIN_2, _OUTPUT_SPEED_MEDUIM);
   MGPIO_voidSetPullType(_GPIOA_PORT, _PIN_2, _PULL_OFF);
  while(1)
  {

	 MGPIO_voidDirectSetReset(_GPIOA_PORT, _PIN_1, _HIGH);
	 Delay_vMsIn16MHz(100);
	 MGPIO_voidDirectSetReset(_GPIOA_PORT, _PIN_1, _LOW);
	 Delay_vMsIn16MHz(100);
  }
}
