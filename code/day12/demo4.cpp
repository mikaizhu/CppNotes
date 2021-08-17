#include <iostream>
using namespace std;

class Entity
{
  public:
    float X = 0.0f, Y = 0.0f;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
  public:
    const char* Name;

    Player (char *name)
    {
        Name = name;
    }

    void PrintName()
    {
        cout << Name << endl;
    }
};

int main()
{
    Player player("Lisa");
    cout << player.X << " " << player.Y << endl;
    player.Move(2.0f, 2.0f);
    player.PrintName();
}
