cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name
project(parseQuantity)

# set executables
set(THIS_PROJECT_SRC_DIRECTORIES
    parseQuantity.cpp
)

# set flags
set(THIS_PROJECT_FLAGS
    -Wall
    -Werror 
    -Weffc++
    -Wextra
    -pedantic
    -Wconversion 
    -O3
)

# add all executables
add_library(${PROJECT_NAME} STATIC ${THIS_PROJECT_SRC_DIRECTORIES})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

add_executable(${PROJECT_NAME}_test main.cpp ${THIS_PROJECT_SRC_DIRECTORIES})
    
# specify compile options for target
target_compile_options(${PROJECT_NAME} PRIVATE ${THIS_PROJECT_FLAGS})

# enable standard cpp17
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

