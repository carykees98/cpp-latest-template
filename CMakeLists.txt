cmake_minimum_required(VERSION 3.20...3.30)

find_package(Doxygen)
find_program(CLANG_TIDY_EXE NAMES "clang-tidy" REQUIRED)
set(CLANG_TIDY_COMMAND "${CLANG_TIDY_EXE}; --format-style=file")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(CPPTemplate
    VERSION 0.1.0
    DESCRIPTION "A C++ Project Template"
    LANGUAGES CXX
)

if (${DOXYGEN_FOUND})
    set(DOXYFILE_IN ${CMAKE_CURRENT_SOURCE_DIR}/doxygen/Doxyfile.in)
    set(DOXYFILE_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    configure_file(${DOXYFILE_IN} ${DOXYFILE_OUT} @ONLY)

    add_custom_target(
      doc ALL
      COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
      COMMENT "Generating API documentation with Doxygen"
      VERBATIM
    )
endif(${DOXYGEN_FOUND})

add_subdirectory(src)
add_subdirectory(core)
