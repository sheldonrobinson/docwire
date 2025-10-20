add_library(docwire_xlsb SHARED xlsb_parser.cpp)

target_link_libraries(docwire_xlsb PRIVATE docwire_core)

if(DOCWIRE_INSTALL)
	install(TARGETS docwire_xlsb EXPORT docwire_targets)
	if(MSVC)
		install(FILES $<TARGET_PDB_FILE:docwire_xlsb> DESTINATION bin CONFIGURATIONS Debug)
	endif()
endif()

include(GenerateExportHeader)
generate_export_header(docwire_xlsb EXPORT_FILE_NAME xlsb_export.h)
if(DOCWIRE_INSTALL)
	install(FILES ${CMAKE_CURRENT_BINARY_DIR}/xlsb_export.h DESTINATION include/docwire)
endif()
