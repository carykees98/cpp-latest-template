file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/include/*.hpp")

add_library(template-lib)

target_sources(template-lib
PRIVATE
    template.cpp
    ${HEADER_LIST}
)

target_include_directories(template-lib
    PRIVATE
    ../include
)

target_compile_features(template-lib
PRIVATE
    cxx_std_23
)

set_target_properties(template-lib
PROPERTIES
    CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}"
)