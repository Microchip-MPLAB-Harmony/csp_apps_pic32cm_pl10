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

#define ADC_VREF                (3.3f)

#define TRANSFER_SIZE 16
#define RTC_COMPARE_VAL 300

#define LED_OFF     LED_Set
#define LED_ON      LED_Clear

volatile bool dma_ch0Done = false;
uint32_t myAppObj = 0;
uint16_t adc_result_array[TRANSFER_SIZE];
float input_voltage;

void DmacCh0Cb(DMAC_TRANSFER_EVENT returned_evnt, uintptr_t MyDmacContext)
{
    if (DMAC_TRANSFER_EVENT_COMPLETE == returned_evnt)
    {
        dma_ch0Done = true;
    }
    else if (DMAC_TRANSFER_EVENT_ERROR == returned_evnt)
    {
        LED_ON();
        while(1);
    }
 }

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    uint16_t sample;
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    LED_OFF();
    
    ADC0_Enable();
    
    RTC_Timer32Start();
    RTC_Timer32CompareSet(RTC_COMPARE_VAL);
    
    DMAC_ChannelCallbackRegister(DMAC_CHANNEL_0, DmacCh0Cb, (uintptr_t)&myAppObj);
    DMAC_ChannelTransfer(DMAC_CHANNEL_0, (const void *)&ADC0_REGS->ADC_RESULT, (const void *)adc_result_array, sizeof(adc_result_array));
 
    printf("\n\r---------------------------------------------------------");
    printf("\n\r                    ADC DMA Sleepwalking Demo                 ");
    printf("\n\r---------------------------------------------------------\n\r");    
    printf("\r\n\r\n Wake CPU after 16 samples are taken\r\n");
    
    while ( true )
    {
        PM_StandbyModeEnter();

        if(dma_ch0Done == true)
        {
            printf("\r\nTransferred 16 results to array in SRAM\r\n");
            for (sample = 0; sample < TRANSFER_SIZE; sample++)
            {
                input_voltage = (float)adc_result_array[sample] * ADC_VREF / 4095U;

                printf("ADC Count = 0x%03x, ADC Input Voltage = %d.%02d V \n\r", adc_result_array[sample], (int)input_voltage, (int)((input_voltage - (int)input_voltage)*100.0));
            }
            dma_ch0Done = false;
            /* Configure the next transfer */
            DMAC_ChannelTransfer(DMAC_CHANNEL_0, (const void *)&ADC0_REGS->ADC_RESULT, (const void *)adc_result_array, sizeof(adc_result_array));
        }
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

