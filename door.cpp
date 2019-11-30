//
// Created by Yaqi Yin on 2019-11-29.
//
#include <iostream>
#include "door.hpp"
using namespace std;
void e_door::print(){
    cout << "Enchanted door connect to:";
    room1 -> print();
    cout << " " << "and" << " ";
    room2 -> print();
    cout << endl;
}
void d_door::print(){
    cout <<  "Dystopian door connect to:";
    room1 ->print();
    cout << " " << "and" << " ";
    room2 ->print();
    cout<<endl;
}
