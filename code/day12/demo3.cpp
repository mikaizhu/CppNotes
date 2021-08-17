#include <iostream>
using namespace std;

class Player
{
  public:
    float X, Y;

    Player ()
    {
        X = 0.0f;
        Y = 0.0f;
        cout << "Creat constructer" << endl;
    }

    ~Player ()
    {
        cout << "delete constructer" << endl;
    }

    void Print()
    {
        cout << X << " " << Y << endl;
    }
};

void Function()
{
    Player player1;
    player1.Print();
}

int main()
{
    Function();
    cin.get();
}

