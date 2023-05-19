#include "Cowboy.hpp"
#include <iostream>

using namespace std;
using namespace ariel;

Cowboy::Cowboy(string name, Point point):Character(110,name,point,"C"),amount_of_balls(6)
{

}

Cowboy::~Cowboy()
{
}

bool Cowboy:: hasboolets(){
    // if(amount_of_balls > 0)
    //     return true;
    return false;
}

void Cowboy:: reload(){
    amount_of_balls = 6;
}

void Cowboy:: shoot(Character* chara){
    
}
