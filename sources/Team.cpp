#include "Team.hpp"
#include <iostream>
#include "Character.hpp"
using namespace std;
using namespace ariel;



Team::Team(Character* player):Team_Base(player)
{
}

Team::~Team()
{
}

void Team:: add(Character* player){

}

void Team:: attack(Team_Base* team){

}

int Team:: stillAlive(){
    return 0;
}

void Team:: print(){
    
}
