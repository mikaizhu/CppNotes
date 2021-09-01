#include "point.h"

using namespace std;


Point::Point (float x, float y)
{
    X = x;
    Y = y;
}

float Point::getX()
{
    return X;
}

float Point::getY()
{
    return Y;
}
