cmake_minimum_required(VERSION 3.23)
project(NextLua)

set(CMAKE_CXX_STANDARD 14)

add_executable(NextLua main.cpp src/lex.cpp src/lex.h src/parser.cpp src/parser.h)
