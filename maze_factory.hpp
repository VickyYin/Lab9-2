//
// Created by Yaqi Yin on 2019-11-29.
//

#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP
class maze_factory{
    virtual maze* make_maze() = 0;
    virtual wall* make_wall() = 0;
    virtual room* make_room() = 0;
    virtual door* make_door(room& room1, room& room2) = 0;
};
#endif //LAB9_MAZE_FACTORY_HPP
