cmake_minimum_required(VERSION "3.17.2")

set(This helloworld)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11) 
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#enable_testing()

#add_subdirectory(googletest)

#set(Headers
#    helloworld.hpp
#)

#set(Sources
#    helloworld.cpp
#)

#add_library(${This} STATIC ${Sources} ${Headers})
add_executable (helloworld helloworld.cpp helloworld.hpp)

#add_subdirectory(test)