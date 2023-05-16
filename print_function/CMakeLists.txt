#project(print_function)

#aux_source_directory 查找在某个路径下的所有源文件。
#aux_source_directory(. common_tools_src)

add_library(print_function "")
# 生成动态链接库
target_sources(print_function
    PUBLIC
        src/print_function.c
        include/print_function.h
        src/test.c
)

# 头文件搜索的路径
include_directories(
      #${PROJECT_BINARY_DIR}/lib
      ${PRINT_FUNCTION_INCLUDE_DIR} 
      ${COMMON_TOOLS_INCLUDE_DIR}
)


add_executable(print_function_test 
        src/print_function.c
        src/test.c
        include/print_function.h
)

# it link common_tools libariy to print_function project
target_link_libraries(print_function common_tools)