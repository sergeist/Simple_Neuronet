cmake_minimum_required(VERSION 3.19.1 FATAL_ERROR)

set(PROJECT_NAME Simple_Neuronet)
set(SOURCES src/main.cpp)

project(${PROJECT_NAME} VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
