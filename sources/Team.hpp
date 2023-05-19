#ifndef TEAM_HPP
#define TEAM_HPP

#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Team_Base.hpp"
#include <vector>


using namespace std;
namespace ariel{
    

class Team: public virtual Team_Base  //Cowboy,OldNinja,TrainedNinja,YoungNinja
{
private:
    vector<Cowboy*> cowboys;
    vector<Ninja*> ninjas;
    int capacity;

public:
    Team(Character*);
    ~Team();
    void add(Character*)override;
    void attack(Team_Base*)override;
    int stillAlive()override;
    void print()override;
};






}

#endif