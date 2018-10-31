cmake_minimum_required(VERSION 2.8)

project(myapp)

add_executable(myapp main.cpp)

target_link_libraries(myapp myLibrary)

install(TARGETS myapp DESTINATION bin)
