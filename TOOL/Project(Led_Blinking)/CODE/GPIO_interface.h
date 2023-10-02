/*==================================================================================*
 * File        : GPIO_interface.h     												*
 * Description : This file includes GPIO Driver prototypes and macros 				*
 * Author      : Mahmoud Gharib Embedded SW Engineer 								*
 * Date        : 9/3/2022															*
 * Git account : https://github.com/Mahmoud-Gharib									*
 * mail        : mahmoudgharib99999@gmail.com 										*
 *==================================================================================*/
#ifndef _GPIO_INTERFACE_H
#define _GPIO_INTERFACE_H
/*===========  Include  ===========*/
#include "STD_TYPES.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
/*======== Macros Of Port ========*/
#define _GPIOA_PORT   		   0U
#define _GPIOB_PORT   		   1U
#define _GPIOC_PORT   		   2U
#define _GPIOD_PORT   		   3U
#define _GPIOE_PORT   		   4U
#define _GPIOH_PORT   		   5U
/*======== Macros Of Pins ========*/
#define _PIN_0        		   0U 
#define _PIN_1        		   1U 
#define _PIN_2        		   2U 
#define _PIN_3        		   3U 
#define _PIN_4        		   4U 
#define _PIN_5        		   5U
#define _PIN_6        		   6U
#define _PIN_7        		   7U
#define _PIN_8        		   8U
#define _PIN_9        		   9U
#define _PIN_10       		   10U
#define _PIN_11       		   11U
#define _PIN_12       		   12U
#define _PIN_13       		   13U
#define _PIN_14       		   14U
#define _PIN_15       		   15U
/*======== Macros Of Mode ========*/
#define _MODE_INPUT      	 (0b00)
#define _MODE_OUTPUT     	 (0b01)
#define _MODE_ALTF       	 (0b10)
#define _MODE_ANALOG     	 (0b11)
/*======== Macros Of Type ========*/
#define _OUTPUT_TYPE_PUSH_PULL    0U
#define _OUTPUT_TYPE_OPEN_DRAIN   1U
/*======== Macros Of Speed ========*/
#define _OUTPUT_SPEED_LOW       (0b00)
#define _OUTPUT_SPEED_MEDUIM    (0b01)
#define _OUTPUT_SPEED_HIGH      (0b10)
#define _OUTPUT_SPEED_VERY_HIGH (0b11)
/*======== Macros Of PULL  ========*/
#define _PULL_OFF              (0b00)
#define _PULL_UP               (0b01)
#define _PULL_DOWN             (0b10)
/*======== Macros Write Data  ========*/
#define _HIGH                     1U
#define _LOW	                  0U
/*======== Macros ALTF  ========*/
#define _ALTFN_0           0b0000
#define _ALTFN_1           0b0001
#define _ALTFN_2           0b0010
#define _ALTFN_3           0b0011
#define _ALTFN_4           0b0100
#define _ALTFN_5           0b0101
#define _ALTFN_6           0b0110
#define _ALTFN_7           0b0111
#define _ALTFN_8           0b1000
#define _ALTFN_9           0b1001
#define _ALTFN_10          0b1010
#define _ALTFN_11          0b1011
#define _ALTFN_12          0b1100
#define _ALTFN_13          0b1101
#define _ALTFN_14          0b1110
#define _ALTFN_15          0b1111

/*===========================     Function Prototypes     ===========================*/
void MGPIO_voidSetPinMode(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8Mode  );
void MGPIO_voidSetPinOutPutType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8OutPutType  );
void MGPIO_voidSetPinOutSpeed(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8OutSpeed );
void MGPIO_voidSetPullType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8PullType );
u8 MGPIO_u8ReadData(u8 copy_u8PORT ,u8 copy_u8PIN);
void MGPIO_voidWriteData(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State);
void MGPIO_voidDirectSetReset(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State);
void MGPIO_voidPinLock(u8 Copy_u8PortNum ,u8 Copy_u8PinNum );
void MGPIO_voidSetPinAltFn( u8 Copy_u8PortNum ,u8 Copy_u8PinNum, u8 Copy_u8ALF );

#endif //_GPIO_INTERFACE_H
