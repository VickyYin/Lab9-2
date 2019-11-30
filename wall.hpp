//
// Created by Yaqi Yin on 2019-11-29.
//

#ifndef LAB9_WALL_HPP
#define LAB9_WALL_HPP
class wall{
public:
    virtual void print () = 0;
};
class e_wall : public wall{
public:
    void print()override ;
};
class d_wall: public wall{
public:
    void print()override ;
};
#endif //LAB9_WALL_HPP
