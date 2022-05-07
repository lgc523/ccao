#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    // 空行
    // get() getline() 读取空行后将设置失效位 failbit
    //接下来的输入将被阻断，可以使用 cin.clear() 恢复输入

    //输入行字符太多
    cout << "Enter you name:\n";
    cin.get(name, ArSize).get();
    if (strlen(name) == 0)
        cin.clear();
    cin.get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << "." << endl;
    return 0;
}