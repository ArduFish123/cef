// Copyright 2023 The Chromium Embedded Framework Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be found
// in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_VIEWS_NATIVE_WIDGET_MAC_H_
#define CEF_LIBCEF_BROWSER_VIEWS_NATIVE_WIDGET_MAC_H_
#pragma once

#include "include/internal/cef_ptr.h"

#include "ui/views/widget/native_widget_mac.h"

class CefWindow;
class CefWindowDelegate;

class CefNativeWidgetMac : public views::NativeWidgetMac {
 public:
  CefNativeWidgetMac(views::internal::NativeWidgetDelegate* delegate,
                     CefRefPtr<CefWindow> window,
                     CefWindowDelegate* window_delegate);
  ~CefNativeWidgetMac() override = default;

  CefNativeWidgetMac(const CefNativeWidgetMac&) = delete;
  CefNativeWidgetMac& operator=(const CefNativeWidgetMac&) = delete;

 protected:
  // NativeWidgetMac:
  NativeWidgetMacNSWindow* CreateNSWindow(
      const remote_cocoa::mojom::CreateWindowParams* params) override;

  void GetWindowFrameTitlebarHeight(bool* override_titlebar_height,
                                    float* titlebar_height) override;
  void OnWindowFullscreenTransitionStart() override;
  void OnWindowFullscreenTransitionComplete() override;

 private:
  const CefRefPtr<CefWindow> window_;
  CefWindowDelegate* const window_delegate_;
};

#endif  // CEF_LIBCEF_BROWSER_VIEWS_NATIVE_WIDGET_MAC_H_
