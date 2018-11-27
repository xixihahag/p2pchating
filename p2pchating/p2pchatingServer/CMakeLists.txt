cmake_minimum_required (VERSION 3.5)
project (p2pchating)
include_directories(./include)
SET(CMAKE_CXX_COMPILER "g++")
set(CXX_FLAGS
        -lpthread
        -std=c++11
        -g
        -Wall
        -Werror
        -Wnoexcept
)
add_subdirectory(source)
add_executable(server Server.cc)
TARGET_LINK_LIBRARIES(server source)
