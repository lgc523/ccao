#include <iostream>
using namespace std;
// declare func
void simon(int);
int main()
{
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return EXIT_SUCCESS;
}
//所有的函数的创建都是平等的
void simon(int n)
{
    cout << "Simon says touch your toes " << n << " times. " << endl;
}