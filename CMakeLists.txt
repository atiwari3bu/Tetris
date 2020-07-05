# The minimum version of CMake required
cmake_minimum_required(VERSION 3.15)

# The project name
project(Tetris)

#The C++ standard version. Can be 98 11 14 or 17
set(CMAKE_CXX_STANDARD 14)
#Setting the output directory for the executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

#Using the libraries and cpp files from this directory
file(GLOB Source_files "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

link_directories("./SFML/include")
include_directories("./SFML/build/lib")

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

add_executable(Tetris ${Source_files}) 
target_link_libraries (Tetris sfml-graphics sfml-window sfml-system)
