#project(common_tools)

#aux_source_directory 查找在某个路径下的所有源文件。
#aux_source_directory(. common_tools_src)

add_library(common_tools "")
# 链接库
target_sources(common_tools
    PUBLIC
        src/function_type.c
        include/common_type.h
        include/function_type.h
)
# target_link_libraries(${PROJECT_NAME} print)
# 头文件搜索的路径
message(STATUS "COMMON_TOOLS_INCLUDE_DIR = "${COMMON_TOOLS_INCLUDE_DIR})
include_directories(${COMMON_TOOLS_INCLUDE_DIR})