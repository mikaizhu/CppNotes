#include <iostream>
#include <string>

using namespace std;

int glob_a = 10;
int glob_b = 10;
const int c_glob_a = 10;
const int c_glob_b = 10;
static int s_glob_a = 10;


int main()
{
    int local_a = 10;
    int local_b = 10;
    
    const int c_local_a = 10;
    const int c_local_b = 10;

    static int s_local_a = 10;

    cout << "glob_a: " << (long)&glob_a << endl;
    cout << "glob_b: " << (long)&glob_b << endl;
    cout << "c_glob_a: " << (long)&c_glob_a << endl;
    cout << "c_glob_b: " << (long)&c_glob_b << endl;
    cout << "string const: " << (long)&"hello world" << endl;

    cout << "local_a: " << (long)&local_a << endl;
    cout << "local_b: " << (long)&local_b << endl;
    cout << "c_local_a: " << (long)&c_local_a << endl;
    cout << "c_local_b: " << (long)&c_local_b << endl;

    cout << "s_local_a: " << (long)&s_local_a << endl;
    cout << "s_glob_a: " << (long)&s_glob_a << endl;
}
