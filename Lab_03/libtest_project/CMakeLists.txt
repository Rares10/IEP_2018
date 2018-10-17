cmake_minimum_required(VERSION 2.8)

project(libtest_project)

add_library(myLibrary STATIC myLibrary.c)

install(TARGETS myLibrary DESTINATION lib)
install(FILES myLibrary.h DESTINATION include)
