//
// Created by Yaqi Yin on 2019-11-29.
//

#ifndef LAB9_ROOM_HPP
#define LAB9_ROOM_HPP
class room{
public:
    virtual void print () = 0;
};
class e_room : public room{
public:
    void print() override;
};
class d_room : public room{
public:
    void print() override;
};
#endif //LAB9_ROOM_HPP
