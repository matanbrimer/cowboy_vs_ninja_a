#ifndef NINJA_HPP
#define NINJA_HPP
#include <iostream>
#include "Character.hpp"

namespace ariel{


class Ninja : public Character
{
private:
    int speed;
public:
    Ninja(int, string, int, Point);
    ~Ninja();

    void move(Character*);

    void slash(Character*);

    int getSpeed();




};
}




#endif