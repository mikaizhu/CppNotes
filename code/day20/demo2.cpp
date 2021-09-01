// 设计立方体类
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cube{
  private:
    float L, W, H;
  public:
    float getL(){
        return L;
    }
    void setL(float L_){
        L = L_;
    }

    float getW(){
        return W;
    }
    void setW(float W_){
        W = W_;
    }

    float getH(){
        return H;
    }
    void setH(float H_){
        H = H_;
    }

    float caculateV(){
        float v = H * W * L;
        return v;
    }
    bool isSame(Cube &c){
        if (H == c.getH() && W == c.getW() && L == c.getL())
            return true;
        return false;
    }
};

bool isSame(Cube &c1, Cube &c2){
    if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
        return true;
    return false;
}

int main()
{
    Cube c1;
    Cube c2;
    c1.setH(10);
    c1.setW(10);
    c1.setL(10);
    cout << "c1 v is: " << c1.caculateV() << endl;

    c2.setH(10);
    c2.setW(10);
    c2.setL(10);
    cout << "c2 v is: " << c2.caculateV() << endl;

    cout << "c1 == c2 ? " << (c1.isSame(c2) ? "true" : "false") << endl;
    cout << "c1 == c2 ? " << (isSame(c1, c2) ? "true" : "false") << endl;
}
