#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Blank()
{
    for (int i = 0; i < 5; i++)
    {
        ;
    }
}

void Switch()
{
    char grade = 'D';
 
   switch(grade)
   {
   case 'A' :
      cout << "很棒！" << endl; 
      //break;
   case 'B' :
   case 'C' :
      cout << "做得好" << endl;
      //break;
   case 'D' :
      cout << "您通过了" << endl;
      //break;
   case 'F' :
      cout << "最好再试一下" << endl;
      //break;
   default :
      cout << "无效的成绩" << endl;
   }
   cout << "您的成绩是 " << grade << endl;
}

namespace version1{
void Continues()
{
    string pre_word, cur_word;
    string max_word;
    int count = 0, max_count = 0;
    cout << "input a word: ";
    while (cin >> cur_word)
    {
        if (count == 0) {
            pre_word = cur_word; 
            count++;
            if (max_count < count)
            {
                max_count = count;
                max_word = pre_word;
            }
        }
        else {
            if (cur_word == pre_word)
                count++;
                if (max_count < count)
                {
                    max_count = count;
                    max_word = pre_word;
                }
            else
                count = 0;
        }
    cout << "input a word: ";
    }
    cout << "";
}}

namespace version2{
void Continues()
{ 
    pair<string, int> max_duplicated;
    int count = 0;
    for (string str, prestr; cin >> str; prestr = str)
    {
        if (str == prestr) ++count;
        else count = 0; 
        if (count > max_duplicated.second) max_duplicated = { prestr, count };
    }
    
    if (max_duplicated.first.empty()) cout << "There's no duplicated string." << endl;
    else cout << "the word " << max_duplicated.first << " occurred " << max_duplicated.second + 1 << " times. " << endl;
}}

int main()
{
    //Blank();
    //Switch();
    version2::Continues();
}
