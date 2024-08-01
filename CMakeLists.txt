cmake_minimum_required(VERSION 3.10) 
project(BinaryTree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES 
    src/Main.cpp
    src/BinaryTree
)

add_executable(BinaryTree ${SOURCES})
