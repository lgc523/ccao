#include <iostream>

enum spectrum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet
}; // 0,1,2,...

int main()
{
    using namespace std;
    cout << "red:" << red << endl;
    cout << "violet:" << violet << endl;
    cout << "sizeof:" << sizeof(spectrum) << endl; //? 4

    spectrum band; // define a variable of type spectrum
    band = blue;
    // band = 2000; invalid 2000 not an enumerator
    cout << band << endl;

    // convert
    int l = yellow + green;
    cout << l << endl;

    spectrum sr = spectrum(2);
    cout << sr << endl;

    // just define
    enum
    {
        iota,
        iota_plus_1
    };
    cout << "iota_plus_1:" << iota_plus_1 << endl;

    // explicitly set val 指定的值必须为整数
    enum bits
    {
        one = 1,
        two = 3,
        three // 没有初始化默认比前一个大1
    };
    cout << "explicitly set val:" << three << endl;
    bits myflag;
    // force convert
    myflag = bits(5);
    cout << "myflag:" << myflag << endl;
    //枚举范围 ? todo
    bits flag = bits(12423453);
    cout << "flag:" << flag << endl;
}