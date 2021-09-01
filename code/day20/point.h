#pragma once
#include <iostream>

class Point{
  private:
    float X, Y;
  public:
    Point (float x = 0, float y = 0);
    // 使用构造函数，相当于python中的init
    float getX();
    float getY();
};

