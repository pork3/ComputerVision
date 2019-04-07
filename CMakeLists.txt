cmake_minimum_required(VERSION 3.13)
project(ComputerVision)

set(CMAKE_CXX_STANDARD 14)
find_package( OpenCV REQUIRED)

add_executable(ComputerVision main.cpp platform/DisplayWindow.cpp platform/DisplayWindow.hpp)
target_link_libraries( ComputerVision ${OpenCV_LIBS})
