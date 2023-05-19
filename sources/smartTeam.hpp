#ifndef SMARTTEAM_HPP
#define SMARTTEAM_HPP

#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Team_Base.hpp"
#include <vector>

using namespace std;
namespace ariel{
    

class smartTeam: public Team_Base  //Cowboy,OldNinja,TrainedNinja,YoungNinja
{
private:
    vector<Character*> warriors;
    

public:
    smartTeam(Character*);
    ~smartTeam();
    void add(Character*)override;
    void attack(Team_Base*)override;
    int stillAlive()override;
    void print()override;
};






}

#endif