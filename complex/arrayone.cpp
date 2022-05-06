#include <iostream>

int main()
{
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    // c++ compiler or translator can`t initialize,use statis
    int yamcosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The packege with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];

    cout << "The total yam expense is " << total << " cents.\n";

    // sizeof 用于数组是整个数组的字节数
    cout << "\nSize of yams array= " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of the element= " << sizeof yams[0];
    cout << " bytes.\n";

    short things[] = {1, 2, 3, 4, 5};
    cout << "num_elements: " << sizeof things / sizeof(short) << endl;

    // c++ 11 init array

    double earnings[4]{1.2e4, 1.4e4}; // okay with c++11
    float balances[100]{};
    //列表初始化禁止缩窄转换 narrowing
    long plifs[] = {25, 92, 3.0}; // type 'double' cannot be narrowed to 'long' in initializer list
    return 0;
}