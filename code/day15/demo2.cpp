#include <iostream>
#include <string>

using namespace std;

void Print()
{

    string name = "miki zhu";
    for (auto it = name.begin(); it != name.end(); ++it)
    {
        if (*it == ' ')
            continue;
        else
            *it = 'X';
    }
    cout << name << endl;
}


int main()
{
    Print();
}
