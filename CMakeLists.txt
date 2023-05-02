cmake_minimum_required(VERSION 3.22.1)
project(teste VERSION 0.1 LANGUAGES CXX )

set( CMAKE_CXX_FLAGS "-Wall")

include_directories( include )


add_executable( program
                src/main.cpp
                src/Playlist.cpp
                src/Lista_Playlist.cpp)

set_property(TARGET program PROPERTY CXX_STANDARD 14)