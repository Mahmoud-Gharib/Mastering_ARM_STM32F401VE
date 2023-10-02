/*==============================================================================*
 * File        : GPIO_private.h													*
 * Description : This file includes Addresses of GPIO 						    *
 * Author      : Mahmoud Gharib Embedded SW Engineer 							*
 * Date        : 9/3/2022														*
 * Git account : https://github.com/Mahmoud-Gharib								*
 * mail        : mahmoudgharib99999@gmail.com 									*
 *==============================================================================*/

/*==============================================================================*																		*
 *	  - Developer can't Edit in it    											*
 *	  - Register _ Defination													*
 *	  - Design : 																*
 *					- #define	:	NO											*
 *					- Union		:	NO											*
 *					- Struct	:	YES											*
 *==============================================================================*/

#ifndef _GPIO_PRIVATE_H
#define _GPIO_PRIVATE_H

/*================================================================================*
*	-----> Macros																  *
*			*  Base_Address GPI0x                                                 *
*=================================================================================*/

#define  GPIOA_BASE_ADDRESS         0x40020000
#define  GPIOB_BASE_ADDRESS         0x40020400
#define  GPIOC_BASE_ADDRESS         0x40020800
#define  GPIOD_BASE_ADDRESS 		0x40020C00
#define  GPIOE_BASE_ADDRESS 		0x40021000
#define  GPIOH_BASE_ADDRESS 		0x40021C00

/*================================================================*
*	-)Struct : General Purpose I/O								  *
*=================================================================*/
typedef struct{
	 volatile u32 MODER  ;  
	 volatile u32 OTYPER ;  
	 volatile u32 OSPEEDR;  
	 volatile u32 PUPDR  ;  
	 volatile u32 IDR    ;  
	 volatile u32 ODR    ;  
	 volatile u32 BSRR   ;  
	 volatile u32 LCKR   ;  
	 volatile u32 AFRL   ;  
	 volatile u32 AFRH   ;
}GPIOx_t;

/*===============================================================*
*	-)Struct Macros :											 *
*			*  Base_Address GPIOA 				                 *
*================================================================*/
#define MGPIOA        ((GPIOx_t *) GPIOA_BASE_ADDRESS )
/*===============================================================*
*	-)Struct Macros :											 *
*			*  Base_Address GPIOB 				                 *
*================================================================*/
#define MGPIOB         ((GPIOx_t *) GPIOB_BASE_ADDRESS )
/*===============================================================*
*	-)Struct Macros :											 *
*			*  Base_Address GPIOC 				                 *
*================================================================*/
#define MGPIOC        ((GPIOx_t *) GPIOC_BASE_ADDRESS )
/*===============================================================*
*	-)Struct Macros :											 *
*			*  Base_Address GPIOD 				                 *
*================================================================*/
#define MGPIOD       ((GPIOx_t *) GPIOD_BASE_ADDRESS )
/*===============================================================*
*	-)Struct Macros :											 *
*			*  Base_Address GPIOE 				                 *
*================================================================*/
#define MGPIOE         ((GPIOx_t *) GPIOE_BASE_ADDRESS )
/*===============================================================*
*	-)Struct Macros :											 *
*			*  Base_Address GPIOH 				                 *
*================================================================*/
#define MGPIOH        ((GPIOx_t *) GPIOH_BASE_ADDRESS )

#define _LUCKED_PIN    16U

#endif //_GPIO_PRIVATE_H

