#include <iostream>
using namespace std;

// 两数之积
int TwoNumMulty()
{
    int num1, num2;
    cout << "input num1: ";
    cin >> num1;
    cout << "input num2: ";
    cin >> num2;
    cout << num1 * num2 << endl;
    return 0;
}
// 50到100整数相加
void Sum()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    cout << "Sum is: " << sum << endl;
}

// 10-0倒叙打印
void Print10_0()
{
    for (int i = 10; i >= 0; i--)
    {
        cout << i << endl;
    }
}

// print input iterger num in num1 and num2
void Print_num1_num2()
{
    int num1, num2;
    cout << "input num1: ";
    cin >> num1;
    cout << "input num2: ";
    cin >> num2;
    for ( ; num1 <= num2 ; num1++)
    {
        cout << num1 << " ";
    }
}

void Add_series_num()
{
    int sum = 0, num;
    while (cin >> num)
    {
        sum += num;
    }
    cout << "sum of input is: " << sum << endl;
}


int main()
{
    //TwoNumMulty();
    //Sum();
    //Print10_0();
    //Print_num1_num2();
    Add_series_num();
}
