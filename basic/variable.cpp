#include <iostream>
// c++ 区分大小写
//以两个下划线或下划线和大写字母打头的名称被保留实现(编译及其使用的资源)使用
//以一个下划线开头的名称被保留给实现，用作全局标识符
// c++ 对名称的长度没有限制，名称中所有的字符都有意义
int main()
{
    using namespace std;
    int carrots;
    carrots = 25;
    cout << "I hava ";
    cout << carrots;
    cout << " carrits.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots. " << endl;
    printf("c++ cout simpler than printf in c. \n");
    return 0;
    //整型
    // short 至少 16 位
    // int   至少和 short 一样长
    // long  至少 32 位，且至少与 int 一样长
    // sizeof 返回类型或变量的长度，单位为字节
    // unsigned
    // long long
    //确定常量类型?
    //如使用了特殊的后缀来表示特定的类型，或者值太大，不能存储为int，否则 c++ 将整型敞亮存储为 int 类型
    // char 足够长，能够表示目标计算机系统中的所有基本符号-所有的字母、数字、标点符号
    // bool 非零 = true,0=false
    // const 优先 #define，能够更明确指定类型，方便控制作用域，可以用于更复杂的类型
}