/**
 *      __            ____
 *     / /__ _  __   / __/                      __  
 *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
 *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
 *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
 *                    /_/   github.com/KitSprout    
 * 
 *  @file    nrf5x_delay.c
 *  @author  KitSprout
 *  @date    01-Dec-2017
 *  @brief   
 * 
 */
 
/* Includes --------------------------------------------------------------------------------*/
#include "nrf_delay.h"

/** @addtogroup NRF5x_Driver
 *  @{
 */

/* Private typedef -------------------------------------------------------------------------*/
/* Private define --------------------------------------------------------------------------*/
/* Private macro ---------------------------------------------------------------------------*/
/* Private variables -----------------------------------------------------------------------*/
/* Private function prototypes -------------------------------------------------------------*/
/* Private functions -----------------------------------------------------------------------*/

/**
 *  @brief  delay_nop
 */
void delay_nop( __IO uint32_t __n )
{
  while (__n--) {
    __nop();
  }
}

/**
 *  @brief  delay_us
 */
void delay_us( __IO uint32_t __us )
{
  nrf_delay_us(__us);
}

/**
 *  @brief  delay_ms
 */void delay_ms( __IO uint32_t __ms )
{
  while (__ms != 0) {
    __ms--;
    nrf_delay_us(999);
  }
}

/*************************************** END OF FILE ****************************************/