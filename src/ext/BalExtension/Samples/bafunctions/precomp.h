//-------------------------------------------------------------------------------------------------
// <copyright file="precomp.h" company="Outercurve Foundation">
//   Copyright (c) 2004, Outercurve Foundation.
//   This software is released under Microsoft Reciprocal License (MS-RL).
//   The license and further copyright text can be found in the file
//   LICENSE.TXT at the root directory of the distribution.
// </copyright>
//-------------------------------------------------------------------------------------------------

#pragma once


#include <windows.h>
#include <gdiplus.h>
#include <msiquery.h>
#include <objbase.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <stdlib.h>
#include <strsafe.h>
#include <CommCtrl.h>

// Standard WiX header files, include as required
#include "dutil.h"
//#include "memutil.h"
//#include "dictutil.h"
//#include "dirutil.h"
#include "fileutil.h"
#include "locutil.h"
//#include "logutil.h"
#include "pathutil.h"
//#include "resrutil.h"
//#include "shelutil.h"
#include "strutil.h"
#include "thmutil.h"
//#include "uriutil.h"
//#include "xmlutil.h"
#include "regutil.h"

//#include "IBootstrapperEngine.h"
//#include "IBootstrapperApplication.h"

#include "BalBaseBootstrapperApplication.h"
//#include "balinfo.h"
//#include "balcondition.h"
#include "balutil.h"

#include "BAFunctions.h"
#include "IBAFunctions.h"

HRESULT WINAPI CreateBAFunctions(
    __in HMODULE hModule,
    __in const BA_FUNCTIONS_CREATE_ARGS* pArgs,
    __inout BA_FUNCTIONS_CREATE_RESULTS* pResults
    );
