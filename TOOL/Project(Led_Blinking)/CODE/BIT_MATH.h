/*==============================================================================*
 * File        : BIT_MATH.h							     						*
 * Description : This file includes macros used for Bit manipulation          	*
 * Author      : Mahmoud Gharib Embedded SW Engineer 							*
 * Date        : 1/2/2022														*
 * Git account : https://github.com/Mahmoud-Gharib								*
 * mail        : mahmoudgharib99999@gmail.com 									*
 *==============================================================================*/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/*Bit-Math macros*/
#define SET_BIT(REG , BIT)   REG |= 1U<<BIT
#define CLR_BIT(REG , BIT)   REG &= ~(1U<<BIT)
#define TOG_BIT(REG , BIT)   REG ^= 1U<<BIT
#define GET_BIT(REG , BIT)   ((REG >> BIT) & 1U )

/*
MRCC_vDisableableClock(AHB1, 0U );
*/

 #endif /* BIT_MATH_H_ */
