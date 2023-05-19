#include "Point.hpp"
#include <cmath>
#include <iostream>

using namespace std;
using namespace ariel;


Point::Point(double x, double y): x(x), y(y) {
    if (x < 0 || y < 0) {
        throw invalid_argument("Position values must be positive");
    }
}

Point::Point(Point const &point):x(point.getX()),y(point.getY()){

}

Point::~Point(){

}

double Point::distance(Point other_p)
{
    return sqrt(pow(x - other_p.x, 2) + pow(y - other_p.y, 2));
}

double Point::getX() const
{
    return this->x;
}

double Point::getY() const
{
    return this->y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

Point ariel::Point:: moveTowards(Point source, Point dest, double maxDist)
{
    double dist=source.distance(dest);
    if(dist < maxDist){
        return Point (dest.getX(), dest.getY());//source (1.3,3.5)  dest(32.3,44) max = 8
    }
    double dx = dest.getX() - source.getX();// = 31
    double dy = dest.getY() - source.getY();// = 40.5 
    
    dx /= dist;
    dy /= dist;
 
    return Point(source.getX()+(dx*maxDist), source.getY()+(dy*maxDist));
}

void Point::print(){
    cout <<"(" << getX()<<","<<getY()<<")"<<endl;
}


