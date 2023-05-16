#project(print_function)

#aux_source_directory 查找在某个路径下的所有源文件。
#aux_source_directory(. common_tools_src)

add_library(main_test "")
# 生成动态链接库
target_sources(main_test
    PUBLIC
        src/main.c
        include/main.h
)

# 头文件搜索的路径
include_directories(
      #${PROJECT_BINARY_DIR}/lib
      ${PRINT_FUNCTION_INCLUDE_DIR} 
      ${COMMON_TOOLS_INCLUDE_DIR}
)


add_executable(print_function_test 
        src/main.c
        include/main.h
)

# it link common_tools libariy to print_function project
target_link_libraries(main_test print_function)