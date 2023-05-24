cmake_minimum_required(VERSION 3.25)
project(ai)

set(CMAKE_CXX_STANDARD 17)

add_executable(ai main.cpp NeuralNetwork.cpp NeuralNetwork.h)
