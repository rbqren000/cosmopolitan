//===---------------------------- any.cpp ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "third_party/libcxx/any"

namespace std {
const char* bad_any_cast::what() const _NOEXCEPT {
    return "bad any cast";
}
}


#include "third_party/libcxx/experimental/__config"

//  Preserve std::experimental::any_bad_cast for ABI compatibility
//  Even though it no longer exists in a header file
_LIBCPP_BEGIN_NAMESPACE_LFTS

class _LIBCPP_EXCEPTION_ABI _LIBCPP_AVAILABILITY_BAD_ANY_CAST bad_any_cast : public bad_cast
{
public:
    virtual const char* what() const _NOEXCEPT;
};

const char* bad_any_cast::what() const _NOEXCEPT {
    return "bad any cast";
}

_LIBCPP_END_NAMESPACE_LFTS
