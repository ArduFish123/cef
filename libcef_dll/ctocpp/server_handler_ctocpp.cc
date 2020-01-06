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
// $hash=012586ea98412d82bf3b6b801a1c4842409db734$
//

#include "libcef_dll/ctocpp/server_handler_ctocpp.h"
#include "libcef_dll/cpptoc/callback_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/server_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnServerCreated(CefRefPtr<CefServer> server) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_server_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;

  // Execute
  _struct->on_server_created(_struct, CefServerCppToC::Wrap(server));
}

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnServerDestroyed(CefRefPtr<CefServer> server) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_server_destroyed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;

  // Execute
  _struct->on_server_destroyed(_struct, CefServerCppToC::Wrap(server));
}

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnClientConnected(CefRefPtr<CefServer> server,
                                               int connection_id) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_client_connected))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;

  // Execute
  _struct->on_client_connected(_struct, CefServerCppToC::Wrap(server),
                               connection_id);
}

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnClientDisconnected(CefRefPtr<CefServer> server,
                                                  int connection_id) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_client_disconnected))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;

  // Execute
  _struct->on_client_disconnected(_struct, CefServerCppToC::Wrap(server),
                                  connection_id);
}

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnHttpRequest(CefRefPtr<CefServer> server,
                                           int connection_id,
                                           const CefString& client_address,
                                           CefRefPtr<CefRequest> request) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_http_request))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;
  // Verify param: client_address; type: string_byref_const
  DCHECK(!client_address.empty());
  if (client_address.empty())
    return;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;

  // Execute
  _struct->on_http_request(_struct, CefServerCppToC::Wrap(server),
                           connection_id, client_address.GetStruct(),
                           CefRequestCppToC::Wrap(request));
}

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnWebSocketRequest(
    CefRefPtr<CefServer> server,
    int connection_id,
    const CefString& client_address,
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_web_socket_request))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;
  // Verify param: client_address; type: string_byref_const
  DCHECK(!client_address.empty());
  if (client_address.empty())
    return;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return;

  // Execute
  _struct->on_web_socket_request(_struct, CefServerCppToC::Wrap(server),
                                 connection_id, client_address.GetStruct(),
                                 CefRequestCppToC::Wrap(request),
                                 CefCallbackCppToC::Wrap(callback));
}

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnWebSocketConnected(CefRefPtr<CefServer> server,
                                                  int connection_id) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_web_socket_connected))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;

  // Execute
  _struct->on_web_socket_connected(_struct, CefServerCppToC::Wrap(server),
                                   connection_id);
}

NO_SANITIZE("cfi-icall")
void CefServerHandlerCToCpp::OnWebSocketMessage(CefRefPtr<CefServer> server,
                                                int connection_id,
                                                const void* data,
                                                size_t data_size) {
  shutdown_checker::AssertNotShutdown();

  cef_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_web_socket_message))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get())
    return;
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return;

  // Execute
  _struct->on_web_socket_message(_struct, CefServerCppToC::Wrap(server),
                                 connection_id, data, data_size);
}

// CONSTRUCTOR - Do not edit by hand.

CefServerHandlerCToCpp::CefServerHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefServerHandlerCToCpp::~CefServerHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_server_handler_t*
CefCToCppRefCounted<CefServerHandlerCToCpp,
                    CefServerHandler,
                    cef_server_handler_t>::UnwrapDerived(CefWrapperType type,
                                                         CefServerHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCToCppRefCounted<CefServerHandlerCToCpp,
                                   CefServerHandler,
                                   cef_server_handler_t>::kWrapperType =
    WT_SERVER_HANDLER;
