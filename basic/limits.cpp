#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    // sizeof operator yields size of type or of variable
    string bts = " bytes.";
    cout << "int   is " << sizeof(int) << bts << endl;
    cout << "short is " << sizeof n_short << bts << endl;
    cout << "long  is " << sizeof n_long << bts << endl;

    cout << "Minimun int value =" << INT_MIN << endl;
    cout << "Bits per bytes = " << CHAR_BIT << endl;
    return EXIT_SUCCESS;
}