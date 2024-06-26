//===--- overload_expr-i2.h - test input file for iwyu --------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

struct A;

void OverloadedFn(A);

namespace ns {
struct B;

void OverloadedFn2(B);
}  // namespace ns
