//
// Created by Yaqi Yin on 2019-11-29.
//

#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP
#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"
class maze_factory{
public:
    virtual maze* make_maze() = 0;
    //build abstract wall
    virtual wall* make_wall() = 0;
    //build abstract room
    virtual room* make_room() = 0;
    //build abstract door accept the references to two rooms
    virtual door* make_door(room& room1, room& room2) = 0;
};
//build enchanted factory
class e_factory: public maze_factory{
public:
     maze* make_maze() override{return new e_maze;} ;
     wall* make_wall() override{return new e_wall;};
     room* make_room() override{return new e_room;};
     door* make_door(room& room1, room& room2) override{
         door* door = new e_door;
         door -> set_room1(room1);
         door -> set_room2(room2);
         return door;
     } ;

};
//build dystopian factory
class d_factory: public maze_factory{
public:
    maze* make_maze() override{return new d_maze;};
    wall* make_wall() override{return new d_wall;};
    room* make_room() override{return new d_room;};
    door* make_door(room& room1, room& room2) override{
        door* door = new d_door;
        door -> set_room1(room1);
        door -> set_room2( room2);
        return door;
    };
};

#endif //LAB9_MAZE_FACTORY_HPP
