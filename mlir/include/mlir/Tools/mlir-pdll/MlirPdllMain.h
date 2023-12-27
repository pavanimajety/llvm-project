//===- MlirPdllMain.h - MLIR PDLL Driver main -------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// Main entry function for mlir-pdll for when built as standalone binary.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_TOOLS_MLIRPDLL_MLIRPDLLMAIN_H
#define MLIR_TOOLS_MLIRPDLL_MLIRPDLLMAIN_H

namespace mlir {

int MlirPdllMain(int argc, char **argv);
} // namespace mlir
#endif // MLIR_TOOLS_MLIRPDLL_MLIRPDLLMAIN_H
