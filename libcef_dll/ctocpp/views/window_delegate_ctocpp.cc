// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
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
// $hash=7bdd882f715040d06246576d0bafbbd7b9a39f8f$
//

#include "libcef_dll/ctocpp/views/window_delegate_ctocpp.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/cpptoc/views/window_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnWindowCreated(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_window_created)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return;
  }

  // Execute
  _struct->on_window_created(_struct, CefWindowCppToC::Wrap(window));
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnWindowClosing(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_window_closing)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return;
  }

  // Execute
  _struct->on_window_closing(_struct, CefWindowCppToC::Wrap(window));
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnWindowDestroyed(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_window_destroyed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return;
  }

  // Execute
  _struct->on_window_destroyed(_struct, CefWindowCppToC::Wrap(window));
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnWindowActivationChanged(
    CefRefPtr<CefWindow> window,
    bool active) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_window_activation_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return;
  }

  // Execute
  _struct->on_window_activation_changed(_struct, CefWindowCppToC::Wrap(window),
                                        active);
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnWindowBoundsChanged(CefRefPtr<CefWindow> window,
                                                    const CefRect& new_bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_window_bounds_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return;
  }

  // Execute
  _struct->on_window_bounds_changed(_struct, CefWindowCppToC::Wrap(window),
                                    &new_bounds);
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnWindowFullscreenTransition(
    CefRefPtr<CefWindow> window,
    bool is_completed) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_window_fullscreen_transition)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return;
  }

  // Execute
  _struct->on_window_fullscreen_transition(
      _struct, CefWindowCppToC::Wrap(window), is_completed);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefWindow> CefWindowDelegateCToCpp::GetParentWindow(
    CefRefPtr<CefWindow> window,
    bool* is_menu,
    bool* can_activate_menu) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_parent_window)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return nullptr;
  }
  // Verify param: is_menu; type: bool_byaddr
  DCHECK(is_menu);
  if (!is_menu) {
    return nullptr;
  }
  // Verify param: can_activate_menu; type: bool_byaddr
  DCHECK(can_activate_menu);
  if (!can_activate_menu) {
    return nullptr;
  }

  // Translate param: is_menu; type: bool_byaddr
  int is_menuInt = is_menu ? *is_menu : 0;
  // Translate param: can_activate_menu; type: bool_byaddr
  int can_activate_menuInt = can_activate_menu ? *can_activate_menu : 0;

  // Execute
  cef_window_t* _retval =
      _struct->get_parent_window(_struct, CefWindowCppToC::Wrap(window),
                                 &is_menuInt, &can_activate_menuInt);

  // Restore param:is_menu; type: bool_byaddr
  if (is_menu) {
    *is_menu = is_menuInt ? true : false;
  }
  // Restore param:can_activate_menu; type: bool_byaddr
  if (can_activate_menu) {
    *can_activate_menu = can_activate_menuInt ? true : false;
  }

  // Return type: refptr_diff
  return CefWindowCppToC::Unwrap(_retval);
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::IsWindowModalDialog(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_window_modal_dialog)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval =
      _struct->is_window_modal_dialog(_struct, CefWindowCppToC::Wrap(window));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRect CefWindowDelegateCToCpp::GetInitialBounds(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_initial_bounds)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval =
      _struct->get_initial_bounds(_struct, CefWindowCppToC::Wrap(window));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
cef_show_state_t CefWindowDelegateCToCpp::GetInitialShowState(
    CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_initial_show_state)) {
    return CEF_SHOW_STATE_NORMAL;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return CEF_SHOW_STATE_NORMAL;
  }

  // Execute
  cef_show_state_t _retval =
      _struct->get_initial_show_state(_struct, CefWindowCppToC::Wrap(window));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::IsFrameless(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_frameless)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->is_frameless(_struct, CefWindowCppToC::Wrap(window));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::WithStandardWindowButtons(
    CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, with_standard_window_buttons)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->with_standard_window_buttons(
      _struct, CefWindowCppToC::Wrap(window));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::GetTitlebarHeight(CefRefPtr<CefWindow> window,
                                                float* titlebar_height) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_titlebar_height)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }
  // Verify param: titlebar_height; type: simple_byaddr
  DCHECK(titlebar_height);
  if (!titlebar_height) {
    return false;
  }

  // Execute
  int _retval = _struct->get_titlebar_height(
      _struct, CefWindowCppToC::Wrap(window), titlebar_height);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
cef_state_t CefWindowDelegateCToCpp::AcceptsFirstMouse(
    CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, accepts_first_mouse)) {
    return STATE_DEFAULT;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return STATE_DEFAULT;
  }

  // Execute
  cef_state_t _retval =
      _struct->accepts_first_mouse(_struct, CefWindowCppToC::Wrap(window));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::CanResize(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_resize)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->can_resize(_struct, CefWindowCppToC::Wrap(window));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::CanMaximize(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_maximize)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->can_maximize(_struct, CefWindowCppToC::Wrap(window));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::CanMinimize(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_minimize)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->can_minimize(_struct, CefWindowCppToC::Wrap(window));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::CanClose(CefRefPtr<CefWindow> window) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_close)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->can_close(_struct, CefWindowCppToC::Wrap(window));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::OnAccelerator(CefRefPtr<CefWindow> window,
                                            int command_id) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_accelerator)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->on_accelerator(_struct, CefWindowCppToC::Wrap(window),
                                        command_id);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::OnKeyEvent(CefRefPtr<CefWindow> window,
                                         const CefKeyEvent& event) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_key_event)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval =
      _struct->on_key_event(_struct, CefWindowCppToC::Wrap(window), &event);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnThemeColorsChanged(CefRefPtr<CefWindow> window,
                                                   bool chrome_theme) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_theme_colors_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return;
  }

  // Execute
  _struct->on_theme_colors_changed(_struct, CefWindowCppToC::Wrap(window),
                                   chrome_theme);
}

NO_SANITIZE("cfi-icall")
cef_runtime_style_t CefWindowDelegateCToCpp::GetWindowRuntimeStyle() {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_window_runtime_style)) {
    return CEF_RUNTIME_STYLE_DEFAULT;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_runtime_style_t _retval = _struct->get_window_runtime_style(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefWindowDelegateCToCpp::GetLinuxWindowProperties(
    CefRefPtr<CefWindow> window,
    CefLinuxWindowProperties& properties) {
  shutdown_checker::AssertNotShutdown();

  cef_window_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_linux_window_properties)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: window; type: refptr_diff
  DCHECK(window.get());
  if (!window.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->get_linux_window_properties(
      _struct, CefWindowCppToC::Wrap(window), &properties);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefSize CefWindowDelegateCToCpp::GetPreferredSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      _struct->get_preferred_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefSize CefWindowDelegateCToCpp::GetMinimumSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      _struct->get_minimum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefSize CefWindowDelegateCToCpp::GetMaximumSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      _struct->get_maximum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefWindowDelegateCToCpp::GetHeightForWidth(CefRefPtr<CefView> view,
                                               int width) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return 0;
  }

  // Execute
  int _retval =
      _struct->get_height_for_width(_struct, CefViewCppToC::Wrap(view), width);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnParentViewChanged(CefRefPtr<CefView> view,
                                                  bool added,
                                                  CefRefPtr<CefView> parent) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_parent_view_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }
  // Verify param: parent; type: refptr_diff
  DCHECK(parent.get());
  if (!parent.get()) {
    return;
  }

  // Execute
  _struct->on_parent_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                  CefViewCppToC::Wrap(parent));
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnChildViewChanged(CefRefPtr<CefView> view,
                                                 bool added,
                                                 CefRefPtr<CefView> child) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_child_view_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }
  // Verify param: child; type: refptr_diff
  DCHECK(child.get());
  if (!child.get()) {
    return;
  }

  // Execute
  _struct->on_child_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                 CefViewCppToC::Wrap(child));
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnWindowChanged(CefRefPtr<CefView> view,
                                              bool added) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_window_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_window_changed(_struct, CefViewCppToC::Wrap(view), added);
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnLayoutChanged(CefRefPtr<CefView> view,
                                              const CefRect& new_bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_layout_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_layout_changed(_struct, CefViewCppToC::Wrap(view), &new_bounds);
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnFocus(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_focus)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_focus(_struct, CefViewCppToC::Wrap(view));
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnBlur(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_blur)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_blur(_struct, CefViewCppToC::Wrap(view));
}

NO_SANITIZE("cfi-icall")
void CefWindowDelegateCToCpp::OnThemeChanged(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_theme_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_theme_changed(_struct, CefViewCppToC::Wrap(view));
}

// CONSTRUCTOR - Do not edit by hand.

CefWindowDelegateCToCpp::CefWindowDelegateCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefWindowDelegateCToCpp::~CefWindowDelegateCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_window_delegate_t* CefCToCppRefCounted<
    CefWindowDelegateCToCpp,
    CefWindowDelegate,
    cef_window_delegate_t>::UnwrapDerived(CefWrapperType type,
                                          CefWindowDelegate* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefWindowDelegateCToCpp,
                                   CefWindowDelegate,
                                   cef_window_delegate_t>::kWrapperType =
    WT_WINDOW_DELEGATE;
