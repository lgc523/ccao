#include <iostream>

using namespace std;
int main()
{
    // c++11 auto ，让编译器能够根据初始值的类型退款变量的类型
    auto n = 100;
    auto x = 1.5;
    auto y = 1.3e12L; // long double
    cout << n << endl;
    cout << x << endl;
    cout << y << endl;

    // c++ 98
    // std::vector<double> scores;
    // std::vector<double>::iterator pv = scores.begin();
    // auto pvv = scores.begin();
}