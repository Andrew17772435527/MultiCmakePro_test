# 要求最低Cmake版本
cmake_minimum_required(VERSION 3.15)
# 项目名称
project(MultiCmakePro_test)
# C++标准
set(CMAKE_CXX_STANDARD 17)
# 输出目录，${PROJECT_BINARY_DIR}为Cmake命令执行的位置
set(COMMON_TOOLS_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/common_tools/include)
set(PRINT_FUNCTION_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/print_function/include)
set(MAIN_TEST_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/main_test/include)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
# 添加子目录，子目录下必须有CMakeLists.txt
# add_subdirectory(src)
# 包含子目录
add_subdirectory(common_tools)
add_subdirectory(print_function)
# add_subdirectory(print)
