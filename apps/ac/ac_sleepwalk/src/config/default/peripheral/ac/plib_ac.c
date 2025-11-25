/*******************************************************************************
  Analog Comparator PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_ac.c

  Summary:
    AC Source File

  Description:
    This file defines the interface to the AC peripheral library.
    This library provides access to and control of the associated
    Analog Comparator.

  Remarks:
    None.

*******************************************************************************/
// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END
#include "interrupts.h"
#include "plib_ac.h"


static volatile AC_OBJECT acObj;

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

void AC_Initialize(void)
{
    /*Reset AC registers*/
    AC_REGS->AC_CTRLA = (uint8_t)AC_CTRLA_SWRST_Msk;


    /******************** Comparator 0 configurations ********************/
    AC_REGS->COMP[0].AC_COMPCTRLA = AC_COMPCTRLA_MUXPOS_AINP3 | AC_COMPCTRLA_MUXNEG_VREFSCALE | AC_COMPCTRLA_INTSEL_TOGGLE | AC_COMPCTRLA_HYSTEN_Msk | AC_COMPCTRLA_RUNSTDBY_Msk;

    AC_REGS->COMP[0].AC_COMPCTRLA |= AC_COMPCTRLA_ENABLE_Msk;
    AC_REGS->COMP[0].AC_COMPSCALER = AC_COMPSCALER_VALUE(255);
    AC_REGS->COMP[0].AC_COMPCTRLB = AC_COMPCTRLB_REFSEL_INTVREF;
    AC_REGS->AC_CTRLB = AC_CTRLB_INTREF_1V024;
    AC_REGS->AC_INTENSET = (uint8_t)( AC_INTENSET_COMP0_Msk);

    AC_REGS->AC_CTRLA = (uint8_t)AC_CTRLA_ENABLE_Msk;
}

void AC_Start( AC_CHANNEL channel_id )
{
    /* Start Comparison */
    AC_REGS->COMP[channel_id].AC_COMPCTRLA |= AC_COMPCTRLA_ENABLE_Msk;
}

void AC_SetVddScalar( AC_CHANNEL channel_id , uint8_t vdd_scalar)
{
    AC_REGS->COMP[channel_id].AC_COMPSCALER = vdd_scalar;
}

void AC_ChannelSelect( AC_CHANNEL channel_id , AC_POSINPUT positiveInput, AC_NEGINPUT negativeInput)
{
    /* Disable comparator before swapping */
    AC_REGS->COMP[channel_id].AC_COMPCTRLA &= ~AC_COMPCTRLA_ENABLE_Msk;

    AC_REGS->COMP[channel_id].AC_COMPCTRLA &= ~(AC_COMPCTRLA_MUXPOS_Msk | AC_COMPCTRLA_MUXNEG_Msk);
    AC_REGS->COMP[channel_id].AC_COMPCTRLA |= ((uint32_t)positiveInput | (uint32_t)negativeInput);

}

bool AC_StatusGet (AC_CHANNEL channel)
{
    bool breturnVal = false;

    if((AC_REGS->AC_STATUS & (AC_STATUS_STATE0_Msk << (uint8_t)channel)) == (AC_STATUS_STATE0_Msk << (uint8_t)channel))
    {
        breturnVal = true;
    }
    else
    {
        breturnVal = false;
    }

    return breturnVal;
}

void AC_CallbackRegister (AC_CALLBACK callback, uintptr_t context)
{
    acObj.callback = callback;
    acObj.context = context;
}

void __attribute__((used)) AC_InterruptHandler( void )
{
    /* Additional local variable to prevent MISRA C violations (Rule 13.x) */
    uintptr_t context;
    uint8_t status;
    context = acObj.context;
    /* Copy the status to use inside the callback */
    acObj.status = AC_REGS->AC_STATUS;
    status = acObj.status;
    /* Clear the interrupt flags*/
    AC_REGS->AC_INTFLAG = (uint8_t)AC_INTFLAG_Msk;

    /* Callback user function */
    if(acObj.callback != NULL)
    {
        acObj.callback(status, context);
    }
}
