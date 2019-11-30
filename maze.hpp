//
// Created by Yaqi Yin on 2019-11-29.
//
#include <vector>
#include "room.hpp"
#include "door.hpp"
#include "wall.hpp"
#ifndef LAB9_MAZE_HPP
#define LAB9_MAZE_HPP

using namespace std;

class maze{
protected:
    vector<room*> rooms;
    vector<door*> doors;
    vector<wall*> walls;
public:
    ~ maze();
    virtual void print() = 0;
    void add_room(room& room);
    void add_door(door& door);
    void add_wall(wall& wall);
    void printList();
};
class e_maze:public maze{
public:
    void print() override;
};
class d_maze: public maze{
public:
    void print() override;
};
#endif //LAB9_MAZE_HPP
