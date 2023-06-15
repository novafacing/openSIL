/**
 * @file  FchEspi.h
 * @brief FCH ESPI function prototypes
 */
/* Copyright 2021-2023 Advanced Micro Devices, Inc. All rights reserved.    */
// SPDX-License-Identifier: MIT

#pragma once
#include <FCH/Common/FchCommonCfg.h>

/**********************************************************************************************************************
 * @brief Function prototypes
 *
 */

SIL_STATUS InitializeFchEspi(void);

/**********************************************************************************************************************
 * @brief Module data structure
 *
 */

/**********************************************************************************************************************
 * @brief Declare macros here
 *
 */

#define FCH_LPC_BUS 1
#define FCH_LPC_FUNC 1
#define FCH_LPC_DEV 1