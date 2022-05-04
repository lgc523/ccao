#include <iostream>
//using 编译指令，使头文件类、函数、变量可用
//命名空间模块，处理版本冲突，头文件没有 .h 时可以省略 using 编译指令
//std 名称空间里面定义的名称都可以使用
using namespace std;

int main()
{
    cout << "hello c艹!!\n";
    cout << "Come up and C++ me some time.";
    std::cout << endl;
    cin.get();
    system("pause");
    return 0;
}