#include <iostream>
#include <string>
#include <vector>

using namespace std;


class People{
  private:
    string name;
    int age = 32;
  protected:
    string password = "1234";
  public:
    // name 可读可写操作
    string getName(){
        return name;
    }
    void setName(string _name){
        name = _name;
    }

    // age 只可读操作
    int getAge(){
        return age;
    }

    // paw 只可写操作
    void setPaw(string paw){
        password = paw;
        cout << endl;
        cout << "set paw success." << endl;
    }

};

int main()
{
    //sum(10, 20);
    People p;
    p.setName("miki");
    cout << "person name is: " << p.getName() << endl;
    cout << "person age is: " << p.getAge() << endl;
    cout << "input your new paw: ";
    string paw;
    cin >> paw;
    p.setPaw(paw);
}
