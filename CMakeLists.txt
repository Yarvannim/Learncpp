cmake_minimum_required(VERSION 3.30)
project(learncpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(learncpp main.cpp
        exercises/chapter1/Exercise1dot5.cpp
        exercises/chapter1/Exercise1dot5.h
        exercises/chapter1/exercise1_11.cpp
        exercises/chapter1/exercise1_11.h
        exercises/chapter2/chapter2_4.cpp
        exercises/chapter2/chapter2_4.h
        exercises/chapter2/chapter2final.cpp
        exercises/chapter2/chapter2final.h
        exercises/chapter2/chapter2finalIO.cpp
        exercises/chapter2/chapter2finalIO.h)
