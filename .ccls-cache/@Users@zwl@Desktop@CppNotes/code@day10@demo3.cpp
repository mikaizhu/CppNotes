#include <iostream>

struct Player
{
    static int x, y;

    static void Print()
    {
        std::cout << "x is " << x << std::endl;
        std::cout << "y is " << y << std::endl;
    }
};

int Player::x;
int Player::y;

int main()
{
    Player play1;
    play1.x = 2;
    play1.y = 3;
    //play1.Print();
    
    Player play2;
    play2.x = 4;
    play2.y = 6;
    //play2.Print();

    Player::x = 5;
    Player::y = 7;
    Player::Print();
}
