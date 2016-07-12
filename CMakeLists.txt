cmake_minimum_required(VERSION 2.8.12.2)
project(satan)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(test ${SOURCES})

