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
// $hash=bd499845d280360ad8af9ecdcafdeff190ed5005$
//

#include "libcef_dll/cpptoc/request_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK request_callback_cont(struct _cef_request_callback_t* self,
                                        int allow) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefRequestCallbackCppToC::Get(self)->Continue(allow ? true : false);
}

void CEF_CALLBACK
request_callback_cancel(struct _cef_request_callback_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefRequestCallbackCppToC::Get(self)->Cancel();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRequestCallbackCppToC::CefRequestCallbackCppToC() {
  GetStruct()->cont = request_callback_cont;
  GetStruct()->cancel = request_callback_cancel;
}

// DESTRUCTOR - Do not edit by hand.

CefRequestCallbackCppToC::~CefRequestCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefRequestCallback> CefCppToCRefCounted<
    CefRequestCallbackCppToC,
    CefRequestCallback,
    cef_request_callback_t>::UnwrapDerived(CefWrapperType type,
                                           cef_request_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCppToCRefCounted<CefRequestCallbackCppToC,
                                   CefRequestCallback,
                                   cef_request_callback_t>::kWrapperType =
    WT_REQUEST_CALLBACK;
