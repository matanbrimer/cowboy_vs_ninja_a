#include "Character.hpp"
#include <iostream>

using namespace std;
using namespace ariel;



Character::Character(int hit_p, string name_, Point loca,string type_):
            hit_points(hit_p),name(name_),location(loca),type(type_)
{
    
}

Character::~Character()
{
}



bool Character:: isAlive(){
    if(hit_points <= 0 )return false;
    return true;
}

double Character:: distance(Character* player){
    return 2.0;
}

void Character:: hit(int hit){
    if(hit_points >= hit){
        hit_points -= hit;
    }
}

string Character:: getName(){
    return name;
}

Point Character:: getLocation(){
    return Point(2.0,3.0);
}
 
void Character::setName(string newname){
    name = newname;
}

string Character:: print(){
    return "matan brimer";
}

int Character:: get_hit_points(){
    return hit_points;
}

bool Character:: hasboolets(){
    return true;
}

string Character:: getType(){
    return type;
}



