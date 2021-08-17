#include <iostream>
using namespace std;

class Player
{
  public:
    float X, Y;

    Player (float x, float y)
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        cout << X << " " << Y << endl;
    }
};

int main()
{
    Player player1(1.2f, 2.3f);
    player1.Print();
}

