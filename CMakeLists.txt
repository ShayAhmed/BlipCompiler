cmake_minimum_required(VERSION 3.8)
project(Project_8_Interpreter_A)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Input.cpp
        InterpreterA.pdf
        Makefile
        Parse.h
        test1.blip
        test2.blip
        cmake-build-debug/test3.blip
        test4.blip
        main.cpp Input.h String.h ExpTree.h ExpTree.cpp Linkedlist.h Linkedlist.cpp)

add_executable(Project_8_Interpreter_A ${SOURCE_FILES})