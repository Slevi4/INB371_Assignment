#include "point.h"
#include <cmath>



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

ostream& operator<<(ostream& out, Point* point){
}
