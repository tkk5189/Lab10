cmake_minimum_required(VERSION 3.13)
project(Clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(Node.cpp Node.h Linkedlist.cpp Linkedlist.h main.cpp)