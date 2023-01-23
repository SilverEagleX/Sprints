/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  LED.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef LED_H
#define LED_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "DIO.h"

/**********************************************************************************************************************/

/********************* config ************************/
#define LED_PORT    PF 
#define LED_PIN     PINF1  // PINF2 , PINF3

/*====================================================*/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void LED_ON(void);
void LED_OFF(void);

 
#endif  /* LED_H */

/**********************************************************************************************************************
 *  END OF FILE: LED.h
 *********************************************************************************************************************/
