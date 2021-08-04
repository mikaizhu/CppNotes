#include <iostream>

//declared函数，即假设这个Log函数是真实存在的，python中只要import即可, cpp中只要假设存在即可
//cpp会自动从当前目录下寻找Log函数，如果没有找到就会出现link错误
//注意最后面一定要添加;
void Log(const char* message);

int main()
{
    Log("Hello World");
    std::cin.get();
}
