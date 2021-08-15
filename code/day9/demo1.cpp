#include <iostream>

class Player
{
  public:
    int x, y;
    int speed;

    void move()
    {
        x += speed;
        y += speed;
    }
};

void move(Player& player1) // 这里必须传入实例对象进去
{
    player1.x += player1.speed;
    player1.y += player1.speed;
}

/*void move(Player player1) // 这里必须传入实例对象进去, 否则就保持不变
{
    player1.x += player1.speed;
    player1.y += player1.speed;
}
*/

int main()
{
    Player player;
    player.x = 2;
    player.y = 3;
    player.speed = 2;
    player.move();
    std::cout << "x is " << player.x << '\n'
    << "y is " << player.y << std::endl;

    move(player);
    std::cout << "x is " << player.x << '\n'
    << "y is " << player.y << std::endl;

}
