cmake_minimum_required(VERSION 3.14)
project(Lab9)

set(-Wall -Wextra -pedantic
        -std=c++14)

add_executable(Lab9 main.cpp maze_factory.cpp maze_factory.hpp maze_game.hpp maze_game.cpp)