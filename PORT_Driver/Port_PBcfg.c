/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - PORT Driver
 *
 * Author: Hussein El-Shamy
 ******************************************************************************/

/************************************************************************************
 *                             Module Version 1.0.0
 ************************************************************************************/
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)
/************************************************************************************
 *                             AUTOSAR Version 4.0.3
 ************************************************************************************/
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)
/************************************************************************************
 *                  Version Compatibility Check between included files
 ************************************************************************************/
#include "Port.h"

#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
        ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
        ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
        ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
        ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
#error "The SW version of PBcfg.c does not match the expected version"
#endif

/************************************************************************************
 *                   CONFIGURATION STRUCTURE
 ************************************************************************************/

const Port_ConfigType Port_Configuration = {
        /**************************************************************
         *                          PORT A
         **************************************************************/
        /************************** PIN 0 *****************************/
        PORT_A,
        PIN0_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 1 *****************************/
        PORT_A,
        PIN1_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 2 *****************************/
        PORT_A,
        PIN2_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 3 *****************************/
        PORT_A,
        PIN3_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 4 *****************************/
        PORT_A,
        PIN4_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 5 *****************************/
        PORT_A,
        PIN5_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 6 *****************************/
        PORT_A,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 7 *****************************/
        PORT_A,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /**************************************************************
         *                          PORT B
         **************************************************************/
        /************************** PIN 0 *****************************/
        PORT_B,
        PIN0_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 1 *****************************/
        PORT_B,
        PIN1_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 2 *****************************/
        PORT_B,
        PIN2_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 3 *****************************/
        PORT_B,
        PIN3_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 4 *****************************/
        PORT_B,
        PIN4_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 5 *****************************/
        PORT_B,
        PIN5_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 6 *****************************/
        PORT_B,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 7 *****************************/
        PORT_B,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /**************************************************************
         *                          PORT C
         **************************************************************/
        /************************** PIN 0 *****************************/
        PORT_C,
        PIN0_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 1 *****************************/
        PORT_C,
        PIN1_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 2 *****************************/
        PORT_C,
        PIN2_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 3 *****************************/
        PORT_C,
        PIN3_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 4 *****************************/
        PORT_C,
        PIN4_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 5 *****************************/
        PORT_C,
        PIN5_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 6 *****************************/
        PORT_C,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 7 *****************************/
        PORT_C,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /**************************************************************
         *                          PORT D
         **************************************************************/
        /************************** PIN 0 *****************************/
        PORT_D,
        PIN0_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 1 *****************************/
        PORT_D,
        PIN1_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 2 *****************************/
        PORT_D,
        PIN2_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 3 *****************************/
        PORT_D,
        PIN3_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 4 *****************************/
        PORT_D,
        PIN4_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 5 *****************************/
        PORT_D,
        PIN5_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 6 *****************************/
        PORT_D,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 7 *****************************/
        PORT_D,
        PIN6_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /**************************************************************
         *                          PORT E
         **************************************************************/
        /************************** PIN 0 *****************************/
        PORT_E,
        PIN0_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 1 *****************************/
        PORT_E,
        PIN1_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 2 *****************************/
        PORT_E,
        PIN2_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 3 *****************************/
        PORT_E,
        PIN3_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 4 *****************************/
        PORT_E,
        PIN4_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 5 *****************************/
        PORT_E,
        PIN5_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /**************************************************************
         *                          PORT F
         **************************************************************/
        /************************** PIN 0 *****************************/
        PORT_F,
        PIN0_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 1 *****************************
         ******************** Configured as LED **********************/
        PORT_PIN_LED_PORT_ID,
        PORT_PIN_LED_ID,
        PORT_PIN_LED_MODE,
        PORT_PIN_LED_DIRECTION,
        PORT_PIN_LED_DIRECTION_CHANGEABLE,
        PORT_PIN_LED_INTERNAL_RESISTOR,
        PORT_PIN_LED_LEVEL_VALUE,
        PORT_PIN_LED_CHANGEABLE,
        /************************** PIN 2 *****************************/
        PORT_F,
        PIN2_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 3 *****************************/
        PORT_F,
        PIN3_PIN_NUM,
        PORT_PIN_DEFAULT_MODE,
        PORT_PIN_DEFAULT_DIRECTION,
        PORT_PIN_DEFAULT_DIRECTION_CHANGEABLE,
        PORT_PIN_DEFAULT_INTERNAL_RESISTOR,
        PORT_PIN_DEFAULT_INITIAL_VALUE,
        PORT_PIN_DEFAULT_MODE_CHANGEABLE,
        /************************** PIN 4 *****************************
         ******************* Configured as BUTTON ********************/
        PORT_PIN_BUTTON_PORT_ID,
        PORT_PIN_BUTTON_ID,
        PORT_PIN_BUTTON_MODE,
        PORT_PIN_BUTTON_DIRECTION,
        PORT_PIN_BUTTON_DIRECTION_CHANGEABLE,
        PORT_PIN_BUTTON_INTERNAL_RESISTOR,
        PORT_PIN_BUTTON_LEVEL_VALUE,
        PORT_PIN_BUTTON_CHANGEABLE,
};
