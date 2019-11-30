//
// Created by Yaqi Yin on 2019-11-29.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game{
public:
        maze* create_maze(maze_factory& factory);
};
#endif //LAB9_MAZE_GAME_HPP
