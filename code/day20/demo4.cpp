#include "point.h"
#include "circle.h"

int main()
{
    Circle c1;
    c1.setCenter(0, 0);
    c1.setR(1);

    Point p(1, 0);

    c1.isInCircle(p);
}
