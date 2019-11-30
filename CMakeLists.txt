cmake_minimum_required(VERSION 3.14)
project(Lab9)

set(-Wall -Wextra -pedantic
        -std=c++14)

add_executable(Lab9 driver.cpp maze_factory.cpp maze_factory.hpp maze_game.hpp maze_game.cpp maze.hpp maze.cpp door.hpp door.cpp
               room.hpp wall.hpp wall.cpp room.cpp)