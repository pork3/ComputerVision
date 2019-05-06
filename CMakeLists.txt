cmake_minimum_required(VERSION 3.13)
project(ComputerVision)

set(CMAKE_CXX_STANDARD 14)
find_package( OpenCV REQUIRED)

add_executable(ComputerVision main.cpp platform/DisplayWindow.cpp platform/DisplayWindow.hpp tools/Hog.cpp tools/Hog.hpp platform/FrameMonitor.cpp platform/FrameMonitor.hpp datastructures/ImageQueue.cpp datastructures/ImageQueue.hpp platform/platform.hpp tools/ViolaJones.cpp tools/ViolaJones.hpp)
target_link_libraries( ComputerVision ${OpenCV_LIBS})
