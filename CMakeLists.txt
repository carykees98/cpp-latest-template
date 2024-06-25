cmake_minimum_required(VERSION 3.20...3.30)

find_program(CLANG_TIDY_EXE NAMES "clang-tidy" REQUIRED)
set(CLANG-TIDY_COMMAND "${CLANG_TIDY_EXE} --format-style=file")

project(CPPTemplate
    VERSION 0.1.0
    DESCRIPTION "A C++ Project Template"
    LANGUAGES CXX
)

add_subdirectory(src)
add_subdirectory(core)