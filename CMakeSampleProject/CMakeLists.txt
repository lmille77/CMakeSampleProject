cmake_minimum_required(VERSION 3.16)
project(CPPProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

#Overriding default CMake variables
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS       OFF)

#Creating custom CMake variables
set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

#Adding CMake project files
include(AddGitSubmodule)
add_git_submodule(external/json)

#Project subdirectories
add_subdirectory(configure)
add_subdirectory(src)
add_subdirectory(app)


