
/*******************************************************************************************************/
/* Author            : Seraj Alsersawi                                                            */
/* Version           : V0.0.0                                                                          */
/* Data              : 13 August 2022                                                                     */
/* Description       : LBIT_MATH.h                                                                     */

/*******************************************************************************************************/


/*******************************************************************************************************/
/*                                    GUARD                                   	                           */
/*******************************************************************************************************/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/*******************************************************************************************************/
/*                                     FUNCTION LIKE MACROS	     	                               */
/*******************************************************************************************************/

#define SET_ALL_BITS(R)			         (R) = (R | 255)     // R = 0xFFFFFFFF // R = (~0)
#define CLR_ALL_BITS(R)			     	(R & 0)                 //R = 0x00000000 
#define TOG_ALL_BITS(R)		   		 (R) ^ 255                    //R ^= 0xFFFFFFFF 
#define SET_BIT(R , BIT)            		(R) = (R) | (1 << BIT)        //R |= (1 << BIT)  
#define CLR_BIT(R , BIT)            		(R) = (R) & ( ~ ( 1 << BIT )) 
#define TOG_BIT(R , BIT)           		(R) ^ (( 1 << BIT)) 
#define GET_BIT(R , BIT)            		(R >> BIT) & 1 

 


 #endif 
 
 