#pragma once
#include <iostream>
#include "point.h"

class Circle{
  private:
    float R;
    Point center;
  public:
    void setR(float r);
    void setCenter(float x, float y);
    void isInCircle(Point p);
};
