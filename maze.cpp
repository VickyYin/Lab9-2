//
// Created by Yaqi Yin on 2019-11-29.
//
#include <iostream>
#include "maze.hpp"
using namespace std;
//print list of enchanted version
void e_maze::print() {
    cout << "Enchanted Maze:";
    printList();
    cout << endl;
}
//print list of dystopian version
void d_maze::print(){
    cout << "Dystopian Maze:";
    printList();
    cout << endl;
}
void maze::add_room(room &room) {
    rooms.push_back(&room);

}
void maze::add_door(door &door) {
    doors.push_back(&door);
}
void maze::add_wall(wall &wall) {
    walls.push_back(&wall);
}
maze::~maze() {
    for(auto&room : rooms){
        delete room;
    }
    for(auto&door : doors){
        delete door;
    }
    for(auto&wall : walls){
        delete wall;
    }
}
void maze::printList() {
    cout << "Room name:";
    for( int i = 0; i < rooms.size(); ++i){
        rooms[i] -> print();
        cout << endl;
    }
    for( int i = 0; i < doors.size(); ++i){
        doors[i] -> print();
    }
    for( int i = 0; i < walls.size(); ++i){
        walls[i] -> print();
    }

}
