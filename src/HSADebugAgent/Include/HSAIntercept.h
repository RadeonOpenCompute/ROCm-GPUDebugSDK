//==============================================================================
// Copyright (c) 2015 Advanced Micro Devices, Inc. All rights reserved.
//
/// \author AMD Developer Tools
/// \file
/// \brief Intercepting HSA functions
//==============================================================================
#ifndef HSA_INTERCEPT_H_
#define HSA_INTERCEPT_H_

#include <hsa_api_trace.h>

#include "CommunicationControl.h"

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

HsailAgentStatus InitHsaCoreAgentIntercept(HsaApiTable* table);

#ifdef __cplusplus
}
#endif  // __cplusplus

#endif // HSA_INTERCEPT_H
