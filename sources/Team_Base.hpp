#ifndef TEAM_BASE_HPP
#define TEAM_BASE_HPP

#include <iostream>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "Ninja.hpp"

using namespace std;
namespace ariel{

class Team_Base
{
private:
    Character* captain;

protected:
    Character* getCaptain()const{
        return captain;
    }

public:
    Team_Base(Character* capt):captain(capt){};
    virtual  ~Team_Base() = default;
    virtual void add(Character* )=0;
    virtual void print()=0;
    virtual int stillAlive()=0;
    virtual void attack(Team_Base* foe)=0;
    
};
}

#endif