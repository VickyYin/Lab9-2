//
// Created by Yaqi Yin on 2019-11-29.
//
#include "room.hpp"
#ifndef LAB9_DOOR_HPP
#define LAB9_DOOR_HPP

class door{
protected:
    room* room1;
    room* room2;
public:
    ~door(){
        delete room1;
        delete room2;
    }
    virtual void print () = 0;
    void set_room1(room& room1){
        this->room1 = &room1;
    }
    void set_room2(room& room2){
        this->room2 = &room2;
    }

};
class e_door:public door{
public:
    void print()override;
};
class d_door:public door{
public:
    void print()override;
};
#endif //LAB9_DOOR_HPP
