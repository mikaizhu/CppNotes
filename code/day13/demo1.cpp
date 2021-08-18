#include <iostream>
using namespace std;

int main()
{
    // 一维数组
    int d_1list[5];
    cout << "the second element is " << d_1list[1] << endl;
    cout << "the third element is " << d_1list[2] << endl;

    d_1list[0] = 1; // 下标都是从0开始
    d_1list[1] = 2; // 下标都是从0开始

    cout << "the second element is " << d_1list[0] << endl;

    int* pt = d_1list;
    cout << "the first element is " << *pt << endl;
    cout << "the second element is " << *(pt + 1) << endl;

    // 二维数组

    //int d_2list[2][2];
    /*
    int d_2list[2][2] = {
        {1, 2},
        {3, 4},
    };
    */
    int d_2list[2][2] = {1, 2, 3, 4};
    
    // 高维度数组
    int d_3list[2][2][2];
}
