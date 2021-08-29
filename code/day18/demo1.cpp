#include <iostream>
#include <string>
#include <vector>


using namespace std;

int fact(int i)
{
    try{
        if (i < 0)
            throw runtime_error("input num must be positive number");
    } catch (runtime_error err) {
        cout << err.what() << endl;
        return 1;
    }

    return (i == 1) ? 1 : i * fact(i - 1);
}


int cal_fact()
{
    int i;
    cout << "input a number: ";
    cin >> i;
    cout << "the fact of num "<< i << " is " << fact(i) << endl;
    return 0;
}

int call_num()
{
    static int call_count = -1;
    call_count++;
    return call_count;
}
    
void Struct()
{
    struct student
    {
        string name;
        int age;
        float score;
    };

    // 定义结构体数组
    student arr[3] = {
        {"miki1", 21, 60},
        {"miki2", 22, 70},
        {"miki3", 23, 80},
    };

    // 修改结构体数组
    arr[0].name = "miki0";

    // 打印结构体数组
    for (int i = 0; i < 3; i++)
        cout << arr[i].name << arr[i].age << arr[i].score << endl;
}

void Struct_point()
{
    struct student
    {
        string name;
        int age;
        float score;
    };

    student s1;
    student *p = &s1;
    cout << p->name << p->age << p->score << endl;
}

void Struct_Struct()
{
    struct student
    {
        string name;
        int age;
        float score;
    };

    struct teacher
    {
        string name;
        int age;
        student s1;
    };
    teacher t1;
    t1.name = "miki";
    t1.age = 32;
    t1.s1.name = "miki2";
    t1.s1.age = 22;
    cout << t1.name << endl;
    cout << t1.age << endl;
    cout << t1.s1.name << endl;
    cout << t1.s1.age << endl;
}

struct student
{
    string name;
    int age;
    float score;
};

void PrintStudent1 (student s)
{
    cout << s.name << " " << s.age << " " << s.score << endl;
    s.age = 20;
}
void PrintStudent2 (student *s)
{
    cout << s->name << " " << s->age << " " << s->score << endl;
    s->age = 20;
}

void Struct_function()
{
    student s1 = { "miki", 32, 76 };


    PrintStudent1(s1); // 方式1 值传入
    cout << s1.name << " " << s1.age << " " << s1.score << endl;
    PrintStudent2(&s1); // 方式2 地址传入
    cout << s1.name << " " << s1.age << " " << s1.score << endl;
}

int main()
{
    //cal_fact();
    //cout << call_num() << endl;
    //cout << call_num() << endl;
    //cout << call_num() << endl;
    //Struct_point();
    //Struct_Struct();
    Struct_function();
}
