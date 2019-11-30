#include <iostream>
#include "maze_game.hpp"
#include "maze_factory.hpp"
#include "maze.hpp"
int main() {
    maze_game game;
    //instantiate factories
    e_factory eFactory;
    d_factory dFactory;
    //call create_maze with factories
    maze* e_maze = game.create_maze(eFactory);
    maze* d_maze = game.create_maze(dFactory);
    //call print function on maze
    e_maze ->print();
    d_maze ->print();
    delete e_maze;
    delete d_maze;
    return 0;
}