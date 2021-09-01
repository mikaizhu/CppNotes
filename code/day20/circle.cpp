#include "circle.h"
#include "point.h"

using namespace std;

void Circle::setR(float r)
{
    R = r;
}

void Circle::setCenter(float x, float y)
{
    center = Point(x, y);
}

void Circle::isInCircle(Point p)
{
    float distance_squre;
    distance_squre = (center.getX() - p.getX()) * (center.getX() - p.getX()) + (center.getY() - p.getY()) * (center.getY() - p.getY());
    if ((R * R) == distance_squre)
        cout << "点在圆上" << endl;
    else if ((R * R) > distance_squre)
        cout << "点在圆内" << endl;
    else
        cout << "点在圆外" << endl;
}
