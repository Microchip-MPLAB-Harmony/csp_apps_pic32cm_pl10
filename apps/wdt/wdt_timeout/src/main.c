/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes

volatile bool switch_pressed = false;
void EIC_User_Handler(uintptr_t context)
{
    switch_pressed = true;
}
// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    printf ("\n\r -------------------------------------------------------------");
    printf ("\n\r                           WDT DEMO                           ");
    printf ("\n\r -------------------------------------------------------------");
    printf ("\n\r Press SW0 to emulate deadlock "); 

    SYSTICK_TimerStart();
    EIC_CallbackRegister(EIC_PIN_3,EIC_User_Handler, 0);
    switch_pressed = false;
    while ( true )
    {
        if(switch_pressed == false)
        {
            if(SYSTICK_TimerPeriodHasExpired())
            {
                LED_Toggle();
                WDT_Clear();
            }
        }
        else
        {   
            printf ("\n\r Emulating deadlock................ ");
            printf ("\n\r WDT should reset device in 4 seconds ");           
            while(1);
        }
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

