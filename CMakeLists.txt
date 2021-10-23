cmake_minimum_required(VERSION 3.19)
project(Compara_arvore)

set(CMAKE_CXX_STANDARD 14)

add_executable(Compara_arvore main.cpp)
include_directories(.)
target_link_libraries(Compara_arvore  -L${CMAKE_SOURCE_DIR}/libs prglib)
