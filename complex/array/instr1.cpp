#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    //cin 使用 空白(空格、制表符、换行符) 来确定字符串的结束位置
    //并且控制不了长度
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    cout << name << ": oh,thank you" << endl;
    return 0;
}