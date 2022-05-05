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

    // list initialization
    const int code = 66;
    int x = 66;
    char c1 = {31325}; // narrowing,not allow
    char c2 = {66};    // allowed,char con hold 66
    char c3 = {code};  // ditto
    // char c4 = {x};  // not allowed,x is not constant
    x = 31325;
    char c5 = x; // allowed
    return 0;
}