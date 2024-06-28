cmake_minimum_required(VERSION 3.20...3.30)

find_package(Doxygen)
find_program(CLANG_TIDY_EXE NAMES "clang-tidy" REQUIRED)
set(CLANG-TIDY_COMMAND "${CLANG_TIDY_EXE} --format-style=file")

project(CPPTemplate
    VERSION 0.1.0
    DESCRIPTION "A C++ Project Template"
    LANGUAGES CXX
)

add_custom_target(
  doc ALL
  COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile_in}
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT "Generating API documentation with Doxygen"
  VERBATIM
)

add_subdirectory(src)
add_subdirectory(core)