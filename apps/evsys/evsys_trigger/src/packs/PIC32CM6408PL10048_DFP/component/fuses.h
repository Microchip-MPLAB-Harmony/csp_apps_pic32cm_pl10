/*
 * Component description for FUSES
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
#ifndef _PIC32CMPL10_FUSES_COMPONENT_H_
#define _PIC32CMPL10_FUSES_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR FUSES                      */
/* ************************************************************************** */

/* -------- FUSES_BOOT0_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) BOOT0 Page Word 0 -------- */
#define FUSES_BOOT0_WORD_0_SEQUENCENUMBER_Pos _UINT32_(0)                                          /* (FUSES_BOOT0_WORD_0) Sequence Number Position */
#define FUSES_BOOT0_WORD_0_SEQUENCENUMBER_Msk (_UINT32_(0xFFFFFFFF) << FUSES_BOOT0_WORD_0_SEQUENCENUMBER_Pos) /* (FUSES_BOOT0_WORD_0) Sequence Number Mask */
#define FUSES_BOOT0_WORD_0_SEQUENCENUMBER(value) (FUSES_BOOT0_WORD_0_SEQUENCENUMBER_Msk & (_UINT32_(value) << FUSES_BOOT0_WORD_0_SEQUENCENUMBER_Pos)) /* Assignment of value for SEQUENCENUMBER in the FUSES_BOOT0_WORD_0 register */
#define FUSES_BOOT0_WORD_0_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BOOT0_WORD_0) Register Mask  */


/* -------- FUSES_BOOT1_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) BOOT1 Page Word 0 -------- */
#define FUSES_BOOT1_WORD_0_NVMCTRL_BOOTPROT_Pos _UINT32_(0)                                          /* (FUSES_BOOT1_WORD_0) Bootloader Size Position */
#define FUSES_BOOT1_WORD_0_NVMCTRL_BOOTPROT_Msk (_UINT32_(0x7) << FUSES_BOOT1_WORD_0_NVMCTRL_BOOTPROT_Pos) /* (FUSES_BOOT1_WORD_0) Bootloader Size Mask */
#define FUSES_BOOT1_WORD_0_NVMCTRL_BOOTPROT(value) (FUSES_BOOT1_WORD_0_NVMCTRL_BOOTPROT_Msk & (_UINT32_(value) << FUSES_BOOT1_WORD_0_NVMCTRL_BOOTPROT_Pos)) /* Assignment of value for NVMCTRL_BOOTPROT in the FUSES_BOOT1_WORD_0 register */
#define FUSES_BOOT1_WORD_0_Msk                _UINT32_(0x00000007)                                 /* (FUSES_BOOT1_WORD_0) Register Mask  */


/* -------- FUSES_BOOT2_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) BOOT2 Page Word 0 -------- */
#define FUSES_BOOT2_WORD_0_WDT_ENABLE_Pos     _UINT32_(1)                                          /* (FUSES_BOOT2_WORD_0) WDT Enable Position */
#define FUSES_BOOT2_WORD_0_WDT_ENABLE_Msk     (_UINT32_(0x1) << FUSES_BOOT2_WORD_0_WDT_ENABLE_Pos) /* (FUSES_BOOT2_WORD_0) WDT Enable Mask */
#define FUSES_BOOT2_WORD_0_WDT_ENABLE(value)  (FUSES_BOOT2_WORD_0_WDT_ENABLE_Msk & (_UINT32_(value) << FUSES_BOOT2_WORD_0_WDT_ENABLE_Pos)) /* Assignment of value for WDT_ENABLE in the FUSES_BOOT2_WORD_0 register */
#define FUSES_BOOT2_WORD_0_WDT_WEN_Pos        _UINT32_(2)                                          /* (FUSES_BOOT2_WORD_0) WDT Window Mode Enable Position */
#define FUSES_BOOT2_WORD_0_WDT_WEN_Msk        (_UINT32_(0x1) << FUSES_BOOT2_WORD_0_WDT_WEN_Pos)    /* (FUSES_BOOT2_WORD_0) WDT Window Mode Enable Mask */
#define FUSES_BOOT2_WORD_0_WDT_WEN(value)     (FUSES_BOOT2_WORD_0_WDT_WEN_Msk & (_UINT32_(value) << FUSES_BOOT2_WORD_0_WDT_WEN_Pos)) /* Assignment of value for WDT_WEN in the FUSES_BOOT2_WORD_0 register */
#define FUSES_BOOT2_WORD_0_WDT_ALWAYSON_Pos   _UINT32_(3)                                          /* (FUSES_BOOT2_WORD_0) WDT Always On Position */
#define FUSES_BOOT2_WORD_0_WDT_ALWAYSON_Msk   (_UINT32_(0x1) << FUSES_BOOT2_WORD_0_WDT_ALWAYSON_Pos) /* (FUSES_BOOT2_WORD_0) WDT Always On Mask */
#define FUSES_BOOT2_WORD_0_WDT_ALWAYSON(value) (FUSES_BOOT2_WORD_0_WDT_ALWAYSON_Msk & (_UINT32_(value) << FUSES_BOOT2_WORD_0_WDT_ALWAYSON_Pos)) /* Assignment of value for WDT_ALWAYSON in the FUSES_BOOT2_WORD_0 register */
#define FUSES_BOOT2_WORD_0_WDT_PER_Pos        _UINT32_(8)                                          /* (FUSES_BOOT2_WORD_0) WDT Period Position */
#define FUSES_BOOT2_WORD_0_WDT_PER_Msk        (_UINT32_(0xF) << FUSES_BOOT2_WORD_0_WDT_PER_Pos)    /* (FUSES_BOOT2_WORD_0) WDT Period Mask */
#define FUSES_BOOT2_WORD_0_WDT_PER(value)     (FUSES_BOOT2_WORD_0_WDT_PER_Msk & (_UINT32_(value) << FUSES_BOOT2_WORD_0_WDT_PER_Pos)) /* Assignment of value for WDT_PER in the FUSES_BOOT2_WORD_0 register */
#define FUSES_BOOT2_WORD_0_WDT_WINDOW_Pos     _UINT32_(12)                                         /* (FUSES_BOOT2_WORD_0) WDT Window Position */
#define FUSES_BOOT2_WORD_0_WDT_WINDOW_Msk     (_UINT32_(0xF) << FUSES_BOOT2_WORD_0_WDT_WINDOW_Pos) /* (FUSES_BOOT2_WORD_0) WDT Window Mask */
#define FUSES_BOOT2_WORD_0_WDT_WINDOW(value)  (FUSES_BOOT2_WORD_0_WDT_WINDOW_Msk & (_UINT32_(value) << FUSES_BOOT2_WORD_0_WDT_WINDOW_Pos)) /* Assignment of value for WDT_WINDOW in the FUSES_BOOT2_WORD_0 register */
#define FUSES_BOOT2_WORD_0_WDT_EWOFFSET_Pos   _UINT32_(16)                                         /* (FUSES_BOOT2_WORD_0) WDT Early Warning Offset Position */
#define FUSES_BOOT2_WORD_0_WDT_EWOFFSET_Msk   (_UINT32_(0xF) << FUSES_BOOT2_WORD_0_WDT_EWOFFSET_Pos) /* (FUSES_BOOT2_WORD_0) WDT Early Warning Offset Mask */
#define FUSES_BOOT2_WORD_0_WDT_EWOFFSET(value) (FUSES_BOOT2_WORD_0_WDT_EWOFFSET_Msk & (_UINT32_(value) << FUSES_BOOT2_WORD_0_WDT_EWOFFSET_Pos)) /* Assignment of value for WDT_EWOFFSET in the FUSES_BOOT2_WORD_0 register */
#define FUSES_BOOT2_WORD_0_Msk                _UINT32_(0x000FFF0E)                                 /* (FUSES_BOOT2_WORD_0) Register Mask  */


/* -------- FUSES_BOOT3_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) BOOT3 Page Word 0 -------- */
#define FUSES_BOOT3_WORD_0_SUPC_ENABLE_Pos    _UINT32_(1)                                          /* (FUSES_BOOT3_WORD_0) BOD Enable Position */
#define FUSES_BOOT3_WORD_0_SUPC_ENABLE_Msk    (_UINT32_(0x1) << FUSES_BOOT3_WORD_0_SUPC_ENABLE_Pos) /* (FUSES_BOOT3_WORD_0) BOD Enable Mask */
#define FUSES_BOOT3_WORD_0_SUPC_ENABLE(value) (FUSES_BOOT3_WORD_0_SUPC_ENABLE_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_ENABLE_Pos)) /* Assignment of value for SUPC_ENABLE in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_STDBYCFG_Pos  _UINT32_(5)                                          /* (FUSES_BOOT3_WORD_0) BOD Configuration in Standby Sleeep Mode Position */
#define FUSES_BOOT3_WORD_0_SUPC_STDBYCFG_Msk  (_UINT32_(0x1) << FUSES_BOOT3_WORD_0_SUPC_STDBYCFG_Pos) /* (FUSES_BOOT3_WORD_0) BOD Configuration in Standby Sleeep Mode Mask */
#define FUSES_BOOT3_WORD_0_SUPC_STDBYCFG(value) (FUSES_BOOT3_WORD_0_SUPC_STDBYCFG_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_STDBYCFG_Pos)) /* Assignment of value for SUPC_STDBYCFG in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_RUNSTDBY_Pos  _UINT32_(6)                                          /* (FUSES_BOOT3_WORD_0) BOD Run in Standby Position */
#define FUSES_BOOT3_WORD_0_SUPC_RUNSTDBY_Msk  (_UINT32_(0x1) << FUSES_BOOT3_WORD_0_SUPC_RUNSTDBY_Pos) /* (FUSES_BOOT3_WORD_0) BOD Run in Standby Mask */
#define FUSES_BOOT3_WORD_0_SUPC_RUNSTDBY(value) (FUSES_BOOT3_WORD_0_SUPC_RUNSTDBY_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_RUNSTDBY_Pos)) /* Assignment of value for SUPC_RUNSTDBY in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_ACTCFG_Pos    _UINT32_(8)                                          /* (FUSES_BOOT3_WORD_0) BOD Active Config Position */
#define FUSES_BOOT3_WORD_0_SUPC_ACTCFG_Msk    (_UINT32_(0x1) << FUSES_BOOT3_WORD_0_SUPC_ACTCFG_Pos) /* (FUSES_BOOT3_WORD_0) BOD Active Config Mask */
#define FUSES_BOOT3_WORD_0_SUPC_ACTCFG(value) (FUSES_BOOT3_WORD_0_SUPC_ACTCFG_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_ACTCFG_Pos)) /* Assignment of value for SUPC_ACTCFG in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_SAMPFREQ_Pos  _UINT32_(12)                                         /* (FUSES_BOOT3_WORD_0) BOD Sample frequency Position */
#define FUSES_BOOT3_WORD_0_SUPC_SAMPFREQ_Msk  (_UINT32_(0x1) << FUSES_BOOT3_WORD_0_SUPC_SAMPFREQ_Pos) /* (FUSES_BOOT3_WORD_0) BOD Sample frequency Mask */
#define FUSES_BOOT3_WORD_0_SUPC_SAMPFREQ(value) (FUSES_BOOT3_WORD_0_SUPC_SAMPFREQ_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_SAMPFREQ_Pos)) /* Assignment of value for SUPC_SAMPFREQ in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_LEVEL_Pos     _UINT32_(16)                                         /* (FUSES_BOOT3_WORD_0) BOD Level Position */
#define FUSES_BOOT3_WORD_0_SUPC_LEVEL_Msk     (_UINT32_(0x3) << FUSES_BOOT3_WORD_0_SUPC_LEVEL_Pos) /* (FUSES_BOOT3_WORD_0) BOD Level Mask */
#define FUSES_BOOT3_WORD_0_SUPC_LEVEL(value)  (FUSES_BOOT3_WORD_0_SUPC_LEVEL_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_LEVEL_Pos)) /* Assignment of value for SUPC_LEVEL in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_VLMLVL_Pos    _UINT32_(24)                                         /* (FUSES_BOOT3_WORD_0) Voltage Level Monitor level Position */
#define FUSES_BOOT3_WORD_0_SUPC_VLMLVL_Msk    (_UINT32_(0x3) << FUSES_BOOT3_WORD_0_SUPC_VLMLVL_Pos) /* (FUSES_BOOT3_WORD_0) Voltage Level Monitor level Mask */
#define FUSES_BOOT3_WORD_0_SUPC_VLMLVL(value) (FUSES_BOOT3_WORD_0_SUPC_VLMLVL_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_VLMLVL_Pos)) /* Assignment of value for SUPC_VLMLVL in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_VLMCFG_Pos    _UINT32_(26)                                         /* (FUSES_BOOT3_WORD_0) Voltage Level Monitor config Position */
#define FUSES_BOOT3_WORD_0_SUPC_VLMCFG_Msk    (_UINT32_(0x3) << FUSES_BOOT3_WORD_0_SUPC_VLMCFG_Pos) /* (FUSES_BOOT3_WORD_0) Voltage Level Monitor config Mask */
#define FUSES_BOOT3_WORD_0_SUPC_VLMCFG(value) (FUSES_BOOT3_WORD_0_SUPC_VLMCFG_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_VLMCFG_Pos)) /* Assignment of value for SUPC_VLMCFG in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_SUPC_WRTLOCK_Pos   _UINT32_(31)                                         /* (FUSES_BOOT3_WORD_0) BODVDD register lock Position */
#define FUSES_BOOT3_WORD_0_SUPC_WRTLOCK_Msk   (_UINT32_(0x1) << FUSES_BOOT3_WORD_0_SUPC_WRTLOCK_Pos) /* (FUSES_BOOT3_WORD_0) BODVDD register lock Mask */
#define FUSES_BOOT3_WORD_0_SUPC_WRTLOCK(value) (FUSES_BOOT3_WORD_0_SUPC_WRTLOCK_Msk & (_UINT32_(value) << FUSES_BOOT3_WORD_0_SUPC_WRTLOCK_Pos)) /* Assignment of value for SUPC_WRTLOCK in the FUSES_BOOT3_WORD_0 register */
#define FUSES_BOOT3_WORD_0_Msk                _UINT32_(0x8F031162)                                 /* (FUSES_BOOT3_WORD_0) Register Mask  */


/* -------- FUSES_BOOT4_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) BOOT4 Page Word 0 -------- */
#define FUSES_BOOT4_WORD_0_SUPC_MVIOMODE_Pos  _UINT32_(0)                                          /* (FUSES_BOOT4_WORD_0) MVIO mode Position */
#define FUSES_BOOT4_WORD_0_SUPC_MVIOMODE_Msk  (_UINT32_(0x1) << FUSES_BOOT4_WORD_0_SUPC_MVIOMODE_Pos) /* (FUSES_BOOT4_WORD_0) MVIO mode Mask */
#define FUSES_BOOT4_WORD_0_SUPC_MVIOMODE(value) (FUSES_BOOT4_WORD_0_SUPC_MVIOMODE_Msk & (_UINT32_(value) << FUSES_BOOT4_WORD_0_SUPC_MVIOMODE_Pos)) /* Assignment of value for SUPC_MVIOMODE in the FUSES_BOOT4_WORD_0 register */
#define FUSES_BOOT4_WORD_0_CRCSEL_Pos         _UINT32_(6)                                          /* (FUSES_BOOT4_WORD_0) CRC Polynomial Selection Position */
#define FUSES_BOOT4_WORD_0_CRCSEL_Msk         (_UINT32_(0x1) << FUSES_BOOT4_WORD_0_CRCSEL_Pos)     /* (FUSES_BOOT4_WORD_0) CRC Polynomial Selection Mask */
#define FUSES_BOOT4_WORD_0_CRCSEL(value)      (FUSES_BOOT4_WORD_0_CRCSEL_Msk & (_UINT32_(value) << FUSES_BOOT4_WORD_0_CRCSEL_Pos)) /* Assignment of value for CRCSEL in the FUSES_BOOT4_WORD_0 register */
#define FUSES_BOOT4_WORD_0_CRCBOOT_Pos        _UINT32_(7)                                          /* (FUSES_BOOT4_WORD_0) Run CRC of boot section in flash on system boot Position */
#define FUSES_BOOT4_WORD_0_CRCBOOT_Msk        (_UINT32_(0x1) << FUSES_BOOT4_WORD_0_CRCBOOT_Pos)    /* (FUSES_BOOT4_WORD_0) Run CRC of boot section in flash on system boot Mask */
#define FUSES_BOOT4_WORD_0_CRCBOOT(value)     (FUSES_BOOT4_WORD_0_CRCBOOT_Msk & (_UINT32_(value) << FUSES_BOOT4_WORD_0_CRCBOOT_Pos)) /* Assignment of value for CRCBOOT in the FUSES_BOOT4_WORD_0 register */
#define FUSES_BOOT4_WORD_0_SUT_Pos            _UINT32_(8)                                          /* (FUSES_BOOT4_WORD_0) Startup Time Position */
#define FUSES_BOOT4_WORD_0_SUT_Msk            (_UINT32_(0x7) << FUSES_BOOT4_WORD_0_SUT_Pos)        /* (FUSES_BOOT4_WORD_0) Startup Time Mask */
#define FUSES_BOOT4_WORD_0_SUT(value)         (FUSES_BOOT4_WORD_0_SUT_Msk & (_UINT32_(value) << FUSES_BOOT4_WORD_0_SUT_Pos)) /* Assignment of value for SUT in the FUSES_BOOT4_WORD_0 register */
#define FUSES_BOOT4_WORD_0_Msk                _UINT32_(0x000007C1)                                 /* (FUSES_BOOT4_WORD_0) Register Mask  */


/* -------- FUSES_BOOT5_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) BOOT5 Page Word 0 -------- */
#define FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPINSEL_Pos _UINT32_(0)                                          /* (FUSES_BOOT5_WORD_0) IO Port Pin for Boot External Notification Signal Position */
#define FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPINSEL_Msk (_UINT32_(0x1F) << FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPINSEL_Pos) /* (FUSES_BOOT5_WORD_0) IO Port Pin for Boot External Notification Signal Mask */
#define FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPINSEL(value) (FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPINSEL_Msk & (_UINT32_(value) << FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPINSEL_Pos)) /* Assignment of value for GPIOSEL_GPIOPINSEL in the FUSES_BOOT5_WORD_0 register */
#define FUSES_BOOT5_WORD_0_GPIOSEL_ENABLE_Pos _UINT32_(7)                                          /* (FUSES_BOOT5_WORD_0) Enable Boot External Notification Signal Position */
#define FUSES_BOOT5_WORD_0_GPIOSEL_ENABLE_Msk (_UINT32_(0x1) << FUSES_BOOT5_WORD_0_GPIOSEL_ENABLE_Pos) /* (FUSES_BOOT5_WORD_0) Enable Boot External Notification Signal Mask */
#define FUSES_BOOT5_WORD_0_GPIOSEL_ENABLE(value) (FUSES_BOOT5_WORD_0_GPIOSEL_ENABLE_Msk & (_UINT32_(value) << FUSES_BOOT5_WORD_0_GPIOSEL_ENABLE_Pos)) /* Assignment of value for GPIOSEL_ENABLE in the FUSES_BOOT5_WORD_0 register */
#define FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPORTSEL_Pos _UINT32_(8)                                          /* (FUSES_BOOT5_WORD_0) IO Port for Boot External Notification Signal Position */
#define FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPORTSEL_Msk (_UINT32_(0xF) << FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPORTSEL_Pos) /* (FUSES_BOOT5_WORD_0) IO Port for Boot External Notification Signal Mask */
#define FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPORTSEL(value) (FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPORTSEL_Msk & (_UINT32_(value) << FUSES_BOOT5_WORD_0_GPIOSEL_GPIOPORTSEL_Pos)) /* Assignment of value for GPIOSEL_GPIOPORTSEL in the FUSES_BOOT5_WORD_0 register */
#define FUSES_BOOT5_WORD_0_GPIOSEL_POL_Pos    _UINT32_(17)                                         /* (FUSES_BOOT5_WORD_0) Polarity for Boot External Notification Signal Position */
#define FUSES_BOOT5_WORD_0_GPIOSEL_POL_Msk    (_UINT32_(0x1) << FUSES_BOOT5_WORD_0_GPIOSEL_POL_Pos) /* (FUSES_BOOT5_WORD_0) Polarity for Boot External Notification Signal Mask */
#define FUSES_BOOT5_WORD_0_GPIOSEL_POL(value) (FUSES_BOOT5_WORD_0_GPIOSEL_POL_Msk & (_UINT32_(value) << FUSES_BOOT5_WORD_0_GPIOSEL_POL_Pos)) /* Assignment of value for GPIOSEL_POL in the FUSES_BOOT5_WORD_0 register */
#define FUSES_BOOT5_WORD_0_GPIOSEL_ODRAIN_Pos _UINT32_(19)                                         /* (FUSES_BOOT5_WORD_0) Open Drain Control for Boot External Notification Signal Position */
#define FUSES_BOOT5_WORD_0_GPIOSEL_ODRAIN_Msk (_UINT32_(0x1) << FUSES_BOOT5_WORD_0_GPIOSEL_ODRAIN_Pos) /* (FUSES_BOOT5_WORD_0) Open Drain Control for Boot External Notification Signal Mask */
#define FUSES_BOOT5_WORD_0_GPIOSEL_ODRAIN(value) (FUSES_BOOT5_WORD_0_GPIOSEL_ODRAIN_Msk & (_UINT32_(value) << FUSES_BOOT5_WORD_0_GPIOSEL_ODRAIN_Pos)) /* Assignment of value for GPIOSEL_ODRAIN in the FUSES_BOOT5_WORD_0 register */
#define FUSES_BOOT5_WORD_0_GPIOSEL_SLEWLIM_Pos _UINT32_(20)                                         /* (FUSES_BOOT5_WORD_0) Driver Slew Rate Selection for Boot External Notification Signal Position */
#define FUSES_BOOT5_WORD_0_GPIOSEL_SLEWLIM_Msk (_UINT32_(0x1) << FUSES_BOOT5_WORD_0_GPIOSEL_SLEWLIM_Pos) /* (FUSES_BOOT5_WORD_0) Driver Slew Rate Selection for Boot External Notification Signal Mask */
#define FUSES_BOOT5_WORD_0_GPIOSEL_SLEWLIM(value) (FUSES_BOOT5_WORD_0_GPIOSEL_SLEWLIM_Msk & (_UINT32_(value) << FUSES_BOOT5_WORD_0_GPIOSEL_SLEWLIM_Pos)) /* Assignment of value for GPIOSEL_SLEWLIM in the FUSES_BOOT5_WORD_0 register */
#define FUSES_BOOT5_WORD_0_Msk                _UINT32_(0x001A0F9F)                                 /* (FUSES_BOOT5_WORD_0) Register Mask  */


/* FUSES register offsets definitions */
#define FUSES_BOOT0_WORD_0_REG_OFST    _UINT32_(0x00)      /* (FUSES_BOOT0_WORD_0) BOOT0 Page Word 0 Offset */
#define FUSES_BOOT1_WORD_0_REG_OFST    _UINT32_(0x00)      /* (FUSES_BOOT1_WORD_0) BOOT1 Page Word 0 Offset */
#define FUSES_BOOT2_WORD_0_REG_OFST    _UINT32_(0x00)      /* (FUSES_BOOT2_WORD_0) BOOT2 Page Word 0 Offset */
#define FUSES_BOOT3_WORD_0_REG_OFST    _UINT32_(0x00)      /* (FUSES_BOOT3_WORD_0) BOOT3 Page Word 0 Offset */
#define FUSES_BOOT4_WORD_0_REG_OFST    _UINT32_(0x00)      /* (FUSES_BOOT4_WORD_0) BOOT4 Page Word 0 Offset */
#define FUSES_BOOT5_WORD_0_REG_OFST    _UINT32_(0x00)      /* (FUSES_BOOT5_WORD_0) BOOT5 Page Word 0 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* BOOT0_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_BOOT0_WORD_0; /* Offset: 0x00 (R/   32) BOOT0 Page Word 0 */
} fuses_boot0_fuses_registers_t;

/* BOOT1_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_BOOT1_WORD_0; /* Offset: 0x00 (R/   32) BOOT1 Page Word 0 */
} fuses_boot1_fuses_registers_t;

/* BOOT2_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_BOOT2_WORD_0; /* Offset: 0x00 (R/   32) BOOT2 Page Word 0 */
} fuses_boot2_fuses_registers_t;

/* BOOT3_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_BOOT3_WORD_0; /* Offset: 0x00 (R/   32) BOOT3 Page Word 0 */
} fuses_boot3_fuses_registers_t;

/* BOOT4_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_BOOT4_WORD_0; /* Offset: 0x00 (R/   32) BOOT4 Page Word 0 */
} fuses_boot4_fuses_registers_t;

/* BOOT5_FUSES register API structure */
typedef struct
{
  __I   uint32_t                       FUSES_BOOT5_WORD_0; /* Offset: 0x00 (R/   32) BOOT5 Page Word 0 */
} fuses_boot5_fuses_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_FUSES_COMPONENT_H_ */
