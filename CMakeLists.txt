cmake_minimum_required(VERSION 3.15)



set(NIGHTMARE test)
project("${NIGHTMARE}")


set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")

add_executable("${NIGHTMARE}" NIGHTMARE.cpp
				inc/readF.hpp
				src/readF.cpp)

file(COPY text.txt DESTINATION "/")