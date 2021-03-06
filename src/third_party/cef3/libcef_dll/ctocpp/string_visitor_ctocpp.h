// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_STRING_VISITOR_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_STRING_VISITOR_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_string_visitor.h"
#include "include/capi/cef_string_visitor_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefStringVisitorCToCpp
    : public CefCToCpp<CefStringVisitorCToCpp, CefStringVisitor,
        cef_string_visitor_t> {
 public:
  explicit CefStringVisitorCToCpp(cef_string_visitor_t* str)
      : CefCToCpp<CefStringVisitorCToCpp, CefStringVisitor,
          cef_string_visitor_t>(str) {}
  virtual ~CefStringVisitorCToCpp() {}

  // CefStringVisitor methods
  virtual void Visit(const CefString& string) OVERRIDE;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_STRING_VISITOR_CTOCPP_H_

