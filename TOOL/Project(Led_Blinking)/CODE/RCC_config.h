/*===================================================================================================*
 * File        : RCC_config.h  																		 *
 * Description : The Optiones for RCC Which Developer Choose From Which What Is Appropriate To App	 *															   	*
 * Author      : Mahmoud Gharib Embedded SW Engineer 												 *
 * Date        : 8/3/2022																			 *
 * Git account : https://github.com/Mahmoud-Gharib													 *
 * mail        : mahmoudgharib99999@gmail.com 													   	 *
 *===================================================================================================*/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H
/*================================*
*	- CLKSRC option :          	  *
*			         1) HSI       *
*			         2) HSE       *
*			         3) PLL       *
*=================================*/
#define CLKSRC  HSI
/*================================*
*   - HSE option :				  *
*                 1)_HSE_CRYSTAL  *
*                 2)_HSE_RC       *
*=================================*/
#define HSE_SRC  _HSE_CRYSTAL
/*================================*
*   - PLL option :				  *
*	             1) _HSE_PLL      *
*                2) _HSI_PLL      *
*=================================*/
#define PLL_SRC   _HSE_PLL

#endif // RCC_CONFIG_H
