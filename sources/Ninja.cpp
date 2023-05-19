
#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"

using namespace std;
using namespace ariel;


Ninja::Ninja( int speed, string name,int hp, Point pos):speed(speed), Character(hp, name, pos, "N")
{
}

Ninja::~Ninja()
{
}


void Ninja:: move(Character* chara){
    location = moveTowards(getLocation(), chara->getLocation(), speed);
}

void Ninja:: slash(Character* chara){

}

int Ninja:: getSpeed(){
    return speed;
}