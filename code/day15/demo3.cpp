#include <iostream>
#include <vector>
#include <string>

using namespace std;

void StoreInt()
{
    vector<int> list;
    int input;
    cout << "input a int num: ";
    while (cin >> input)
    {
        list.push_back(input);
        cout << "input a int num: ";
    }
    cout << "vector is: ";
    for (auto &i : list)
    {
        cout << i << " ";
    }
    cout << endl;
}

void StoreString()
{
    vector<string> list;
    string input;
    cout << "input a string: ";
    while (getline(cin, input))
    {
        list.push_back(input);
        cout << "input a string: ";
    }

    cout << "vector is: ";
    for (auto &i : list)
    {
        cout << i << " ";
    }
    cout << endl;
}

void StoreAndTrans()
{
    vector<string> list;
    string input;
    cout << "input a string: ";
    while (cin >> input)
    {
        for (auto  &word : input)
        {
            word = toupper(word);
        }

        list.push_back(input);
        cout << "input a string: ";
    }

    cout << endl << "vector is: " << endl;
    for (auto &i : list)
    {
        cout << i << endl;
    }
}

void PrintSum()
{
    vector<int> list;
    int input;
    cout << "input a int num: ";
    while (cin >> input)
    {
        list.push_back(input);
        cout << "input a int num: ";
    }
    cout << "vector is: ";
    for (auto &i : list)
    {
        cout << i << " ";
    }
    cout << endl;

    int length = list.size();
    for (int i = 0; i < length; i++)
    {
        cout << list[i] + list[length - 1] << endl;
        length--;
    }
}

void Enlarge2()
{
    vector<int> list;
    int input;
    cout << "input a int num: ";
    while (cin >> input)
    {
        list.push_back(input);
        cout << "input a int num: ";
    }

    for (auto it = list.begin(); it != list.end(); it++)
    {
        *it = *it * 2;
    }

    cout << "vector is: ";
    for (auto &i : list)
    {
        cout << i << " ";
    }
    cout << endl;

}

vector<int> Return()
{
    vector<int> vec = {1, 2, 3};
    return vec;
}

void InputVec(vector<int> vec)
{
    for (auto &ele : vec)
        cout << ele << endl;
}


int main()
{
    //StoreInt();
    //StoreString();
    //StoreAndTrans();
    //PrintSum();
    //Enlarge2();
    vector<int> vec = Return();
    vector<int> vec1(vec);



    for (auto &ele : vec)
        cout << ele << endl;
    //InputVec(vec);
}
