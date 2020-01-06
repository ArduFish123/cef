// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=1bde7dcc51e94b88d49b7e277708bd4230272ee0$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_X509CERTIFICATE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_X509CERTIFICATE_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_x509_certificate_capi.h"
#include "include/cef_x509_certificate.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefX509CertificateCppToC
    : public CefCppToCRefCounted<CefX509CertificateCppToC,
                                 CefX509Certificate,
                                 cef_x509certificate_t> {
 public:
  CefX509CertificateCppToC();
  virtual ~CefX509CertificateCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_X509CERTIFICATE_CPPTOC_H_
