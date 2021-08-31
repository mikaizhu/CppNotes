#include <iostream>
#include <string>
#include <vector>

using namespace std;

void sum(int a = 20, int b = 10)
{
    cout << "int a = 10, int b = 20" << endl;
}


void sum(int b = 10, int a = 20)
{
    cout << "int b = 10, int a = 20" << endl;
}

int main()
{
    sum(10, 20);
}
