
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Point.hpp"

using namespace std;

namespace ariel{

class Character: public Point
{
private:
    
    int hit_points;
    string name;
    string type;

protected:
    Point location;
    
public:
    Character(int,string,Point,string);
    ~Character();



    bool isAlive();//Returns true/false if the character is alive
    double distance(Character*);//Returns the distance between the characters
    void hit(int);//Subtracts the appropriate amount of hit points from the character
    string getName();//Returns the name of the character.
    Point getLocation();//Returns the position of the character
    void setName(string);
    string print();
    bool hasboolets();//Indicates whether there are any bullets left in the morning's gun
    int get_hit_points();
    string getType();

};

}


#endif