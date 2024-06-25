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