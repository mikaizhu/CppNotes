#include <iostream>

int main()
{
    bool condition = true;
    int i = 0;
    for (;condition;)
    {
        std::cout << "Hello world" << std::endl;
        i++;
        if (!(i < 5))
        {
            condition = false;
        }
    }
}
