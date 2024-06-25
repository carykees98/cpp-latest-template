file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/include/*.hpp")

add_library(template)

target_sources(template
PRIVATE
    main.cpp
    ${HEADER_LIST}
)

target_include_directories(template
PRIVATE
    ../include
)

target_link_libraries(template
PRIVATE 
    template-lib
)

target_compile_features(template 
PRIVATE 
    cxx_std_23
)

set_target_properties(template
PROPERTIES
    CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}"
)