cmake_minimum_required(VERSION 3.5)

project(zero_comparison LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp)

# нужно определить макрос, иначе функции в стат либе не находит
# https://stackoverflow.com/questions/73494386/lnk2001-linker-error-while-linking-google-benchmark-lib
target_compile_definitions( ${PROJECT_NAME} PUBLIC BENCHMARK_STATIC_DEFINE)
target_include_directories( ${PROJECT_NAME} PUBLIC ../benchmark/include)
target_link_directories(    ${PROJECT_NAME} PUBLIC ../build-benchmark-Release/src)
target_link_libraries(      ${PROJECT_NAME} PUBLIC benchmark)
