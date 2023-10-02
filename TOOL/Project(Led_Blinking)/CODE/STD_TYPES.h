/*==============================================================================================*
 * File        : STD_TYPES.h																	*
 * Description : This file includes macros for standard data types and Boolean Values          	*
 * Author      : Mahmoud Gharib Embedded SW Engineer 											*
 * Date        : 1/2/2022																		*
 * Git account : https://github.com/Mahmoud-Gharib												*
 * mail        : mahmoudgharib99999@gmail.com 													*
 *=============================================================================================*/


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/******** Boolean Values **********/
#ifndef		FALSE
#define		FALSE   (0u)
#endif
	
#ifndef		TRUE
#define		TRUE    (1u)
#endif
	
#define HIGH		(1u)
#define LOW			(0u)

/*unsigned Integer data types*/
typedef unsigned char         u8;
typedef unsigned short int    u16;
typedef unsigned long  int    u32;
typedef unsigned long  long   u64;
/*signed Integer data types*/
typedef signed char           s8;
typedef signed short  int     s16;
typedef signed long   int     s32;
typedef signed long   long    s64;
/*Real data types*/
typedef float                 f32;
typedef double                f64;
typedef long double           f96;

#endif /* STD_TYPES_H_ */
