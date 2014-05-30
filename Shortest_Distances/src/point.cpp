#include "point.h"
#include <cmath>
#include <iostream>
#include <sstream>

using namespace std;

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}

Point::~Point(){
    //TODO
}

double Point::distanceTo(Point *otherPoint){
    double dx = x - otherPoint->x;
    double dy = y - otherPoint->y;
    return sqrt(dx * dx + dy * dy);
}

ostream &operator<<(ostream& out, Point& point){
    stringstream ss;
    ss << point.x;
    string xString = ss.str();
    ss << point.y;
    string yString = ss.str();
    string thePoint = xString + yString;
    out << thePoint;
    return out;
}
