//
// Created by Yaqi Yin on 2019-11-29.
//

#include "maze_game.hpp"
//accept a reference to maze_factory
maze* maze_game::create_maze(maze_factory &factory) {
    //create maze
    maze* maze = factory.make_maze();
    //create room1
    room* room1 = factory.make_room();
    //create room2
    room* room2 = factory.make_room();
    //create door and link rooms to door
    door* door = factory.make_door(*room1, *room2);
    //create wall
    wall* wall = factory.make_wall();
    //put elements into maze
    maze ->add_room(*room1);
    maze ->add_room(*room2);
    maze ->add_door(*door);
    maze ->add_wall(*wall);
    return maze;
}