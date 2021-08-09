#include "iostream"

int main()
{
    char char_;
    int int_;
    bool bool_;
    long long_;
    std::cout << "size of char is " << sizeof(char_) << " bytes"<< std::endl;
    std::cout << "size of int is " << sizeof(int_) << " bytes" << std::endl;
    std::cout << "size of bool is " << sizeof(bool_) << " bytes" << std::endl;
    std::cout << "size of long is " << sizeof(long_) << " bytes" << std::endl;

    // char 类型只能存放到128以内的数值，打了就会报错，因为char为8bits
    char char_a = 'A', char_b = 65; // char类型也可以赋值为数字， 只不过编译器认为这个变量就是字符，因此会把这个数值转换成字母，
    int int_a = 'A', int_b = 65;
    std::cout << "char_a is " << char_a << std::endl;
    std::cout << "char_b is " << char_b << std::endl;
    std::cout << "int_a is " << int_a << std::endl;
    std::cout << "int_b is " << int_b << std::endl;
}
