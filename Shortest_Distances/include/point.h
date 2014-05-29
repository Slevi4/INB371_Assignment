#ifndef POINT_H
#define POINT_H

#include <string>

using namespace std;

class Point
{
    public:
        Point(double, double);
        ~Point();
        double distanceTo(Point*);
        friend ostream& operator<<(ostream& out, Point& point);

    protected:

    private:
        double x;
        double y;
};

#endif // POINT_H
