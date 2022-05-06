#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    // type change on initialization

    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    // list initialization {} c++11 不允许缩窄，变量的类型可能无法表示付赋给它的值
    const int code = 66;
    int x = 66;
    char c1 = {31325}; // narrowing,not allow
    char c2 = {66};    // allowed,char con hold 66
    char c3 = {code};  // ditto
    // char c4 = {x};  // not allowed,x is not constant
    x = 31325;
    char c5 = x; // allowed

    // auto convert
    // c++ 将 bool,char,unsigned char,signed char,short 值转换为 int，整型提升 integral promotion
    //通常将 int 类型选择为计算机最自然的类型，使用这种恶理性，运算速度可能更快
    short chickens = 20;
    short ducks = 35;
    short fowl = chickens + ducks;

    //如果一个操作数为有符号的，另一个操作数时无符号的
    //且无符号操作数的级别比有符号操作数高，则将有符号操作数转换为无符号操作数所属的类型

    //如果有符号类型可表示无符号类型的所有可能取值，将无符号操作数转换为有符号操作数所属的类型
    //否则，将两个操作数都转换为有符号类型的无符号版本

    //传递参数转换 提升
    //强制类型转换
    //  (typeName) val
    //  typeName (val)
    //  static_cast<typeName> (val)
    return 0;
}