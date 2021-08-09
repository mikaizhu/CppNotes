#include "iostream"

// 统计输入的数字中出现了多少次 如：1 1 2 2 2 3 3

int main()
{
    //判断是否有输入的数据
    int cur_num, pre_num = 0, count = 0;
    while (std::cin >> cur_num)
    {
        if (cur_num == pre_num || count == 0)
        {
            ++count;
        }
        else
        {
            std::cout << pre_num << " occurs " << count << " times ";
            count = 1;
        }
        pre_num = cur_num;
    }
    std::cout << pre_num << " occurs " << count << " times "; // 记得打印最后一个
}
