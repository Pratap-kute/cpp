# cmake_minimum_required(VERSION 3.0.0)
# project(Helloworld VERSION 0.1.0 LANGUAGES C CXX)

# include(CTest)
# enable_testing()

# add_executable(Helloworld main.cpp)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
cmake_minimum_required (VERSION 3.5)

project (HelloWorld)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}/src")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (HelloWorld ${source_files})
