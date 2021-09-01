// 设计圆类和点类，判断点在圆上还是圆内
#include <iostream>
#include <string>

using namespace std;

// 设计思路就是，判断这个点和圆心之间的距离，如果距离等于半径，说明点在圆上，距离大于半径，点在圆外
// 所以要设计两个类，点类和圆类

class Point{
  private:
    float X, Y;
  public:
    // 使用构造函数，相当于python中的init
    Point (float x = 0, float y = 0)
    {
        X = x;
        Y = y;
    }
    float getX(){
        return X;
    }
    float getY(){
        return Y;
    }
};

class Circle{
  private:
    float R;
    Point center;
  public:
    void setR(float r){
        R = r;
    }
    void setCenter(float x, float y){
        center = Point(x, y);
    }

    void isInCircle(Point p){
        float distance_squre;
        distance_squre = (center.getX() - p.getX()) * (center.getX() - p.getX()) + (center.getY() - p.getY()) * (center.getY() - p.getY());
        if ((R * R) == distance_squre)
            cout << "点在圆上" << endl;
        else if ((R * R) > distance_squre)
            cout << "点在圆内" << endl;
        else
            cout << "点在圆外" << endl;
    }
};

int main(){
    Circle c1;
    c1.setCenter(0, 0);
    c1.setR(1);

    Point p(0.5, 0.5);

    c1.isInCircle(p);
}
