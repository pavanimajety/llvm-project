set(LLVM_LINK_COMPONENTS
  Demangle
  Support
  TableGen
)

set(LIBS
  MLIRPDLLLib
  )

add_tablegen(mlir-pdll MLIR_PDLL
  DESTINATION "${MLIR_TOOLS_INSTALL_DIR}"
  EXPORT MLIR
  mlir-pdll.cpp

  DEPENDS
  ${LIBS}
  )

set_target_properties(mlir-pdll PROPERTIES FOLDER "Tablegenning")
target_link_libraries(mlir-pdll PRIVATE ${LIBS})
llvm_update_compile_flags(mlir-pdll)

mlir_check_all_link_libraries(mlir-pdll)
