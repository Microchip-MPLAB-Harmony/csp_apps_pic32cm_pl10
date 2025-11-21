/*
 * Component description for SYSCTRL
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*      file generated from device description file (ATDF) version None       */
#ifndef _PIC32CMPL10_SYSCTRL_COMPONENT_H_
#define _PIC32CMPL10_SYSCTRL_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR SYSCTRL                     */
/* ************************************************************************** */

/* -------- SYSCTRL_CTRLA : (SYSCTRL Offset: 0x00) (R/W 32) Control A -------- */
#define SYSCTRL_CTRLA_RESETVALUE              _UINT32_(0x00)                                       /*  (SYSCTRL_CTRLA) Control A  Reset Value */

#define SYSCTRL_CTRLA_PRIV_Pos                _UINT32_(2)                                          /* (SYSCTRL_CTRLA) Priveleged Access Position */
#define SYSCTRL_CTRLA_PRIV_Msk                (_UINT32_(0x1) << SYSCTRL_CTRLA_PRIV_Pos)            /* (SYSCTRL_CTRLA) Priveleged Access Mask */
#define SYSCTRL_CTRLA_PRIV(value)             (SYSCTRL_CTRLA_PRIV_Msk & (_UINT32_(value) << SYSCTRL_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the SYSCTRL_CTRLA register */
#define SYSCTRL_CTRLA_Msk                     _UINT32_(0x00000004)                                 /* (SYSCTRL_CTRLA) Register Mask  */


/* -------- SYSCTRL_WPCTRL : (SYSCTRL Offset: 0x0C) (R/W 32) Write Protection Control -------- */
#define SYSCTRL_WPCTRL_RESETVALUE             _UINT32_(0x00)                                       /*  (SYSCTRL_WPCTRL) Write Protection Control  Reset Value */

#define SYSCTRL_WPCTRL_WPEN_Pos               _UINT32_(0)                                          /* (SYSCTRL_WPCTRL) Write Protection Enable Position */
#define SYSCTRL_WPCTRL_WPEN_Msk               (_UINT32_(0x1) << SYSCTRL_WPCTRL_WPEN_Pos)           /* (SYSCTRL_WPCTRL) Write Protection Enable Mask */
#define SYSCTRL_WPCTRL_WPEN(value)            (SYSCTRL_WPCTRL_WPEN_Msk & (_UINT32_(value) << SYSCTRL_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the SYSCTRL_WPCTRL register */
#define SYSCTRL_WPCTRL_WPLCK_Pos              _UINT32_(1)                                          /* (SYSCTRL_WPCTRL) Write Lock Bit Position */
#define SYSCTRL_WPCTRL_WPLCK_Msk              (_UINT32_(0x1) << SYSCTRL_WPCTRL_WPLCK_Pos)          /* (SYSCTRL_WPCTRL) Write Lock Bit Mask */
#define SYSCTRL_WPCTRL_WPLCK(value)           (SYSCTRL_WPCTRL_WPLCK_Msk & (_UINT32_(value) << SYSCTRL_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the SYSCTRL_WPCTRL register */
#define SYSCTRL_WPCTRL_WPKEY_Pos              _UINT32_(8)                                          /* (SYSCTRL_WPCTRL) Write Protection Key Position */
#define SYSCTRL_WPCTRL_WPKEY_Msk              (_UINT32_(0xFFFFFF) << SYSCTRL_WPCTRL_WPKEY_Pos)     /* (SYSCTRL_WPCTRL) Write Protection Key Mask */
#define SYSCTRL_WPCTRL_WPKEY(value)           (SYSCTRL_WPCTRL_WPKEY_Msk & (_UINT32_(value) << SYSCTRL_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the SYSCTRL_WPCTRL register */
#define SYSCTRL_WPCTRL_Msk                    _UINT32_(0xFFFFFF03)                                 /* (SYSCTRL_WPCTRL) Register Mask  */


/* SYSCTRL register offsets definitions */
#define SYSCTRL_CTRLA_REG_OFST         _UINT32_(0x00)      /* (SYSCTRL_CTRLA) Control A Offset */
#define SYSCTRL_WPCTRL_REG_OFST        _UINT32_(0x0C)      /* (SYSCTRL_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SYSCTRL register API structure */
typedef struct
{  /* System  Controller */
  __IO  uint32_t                       SYSCTRL_CTRLA;      /* Offset: 0x00 (R/W  32) Control A */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       SYSCTRL_WPCTRL;     /* Offset: 0x0C (R/W  32) Write Protection Control */
} sysctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_SYSCTRL_COMPONENT_H_ */
