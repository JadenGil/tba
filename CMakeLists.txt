cmake_minimum_required(VERSION 3.27)
project(tba)

set(CMAKE_CXX_STANDARD 17)
# copy all .txt files to build directory
file(GLOB TXT_FILES ${CMAKE_SOURCE_DIR}/*.txt)
file(COPY ${TXT_FILES} DESTINATION ${CMAKE_BINARY_DIR})

add_executable(tba main.cpp
        functions.h
        functions.cpp)
