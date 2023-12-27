llvm_add_library(MLIRPDLLLib
 MlirPdllMain.cpp

 ADDITIONAL_HEADER_DIRS
 ${MLIR_MAIN_INCLUDE_DIR}/mlir/Tools/mlir-pdll

 LINK_LIBS PUBLIC
 MLIRIR 
 MLIRPDLLCodeGen
 MLIRPDLLAST
 MLIRPDLLODS
 MLIRPDLLParser
)

mlir_check_all_link_libraries(mlir-pdll)