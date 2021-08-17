#include <iostream>
using namespace std;

class Player
{
  public:
    float X, Y;

    Player ()
    {
        //X = 0.0f;
        //Y = 0.0f;
    }

    void Print()
    {
        cout << X << " " << Y << endl;
    }
};

int main()
{
    Player player1;
    player1.Print();
}
