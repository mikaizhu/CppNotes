#include <iostream>

void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Function();
    int i = 1;
    Function();
    Function();
    Function();
}
