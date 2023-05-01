cmake_minimum_required(VERSION 3.22.1)
project(teste VERSION 0.1 LANGUAGES CXX )

set(CMAKE_CXX_FLAGS "-g")

include_directories( include )

add_executable( program
                src/main.cpp
                src/Sistema.cpp
                src/Node.cpp
                src/List.cpp
                src/Playlist.cpp                
                src/Musica.cpp )
