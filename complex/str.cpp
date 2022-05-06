#include <iostream>
using namespace std;
int main()
{
    char dog[2] = {'a', 'b'}; // not a string
    char cat[3] = {'c', 'd', '\0'};

    // string constant graceful
    char bird[7] = "spider";
    char fish[] = "shark";

    //

    cout << "dog:= " << dog << endl; // stop when \0 occur 每次都不一样
    cout << "cat:= " << cat << endl; // let the compiler count

    cout << "bird:=" << bird << endl;
    cout << "sizeof bird=" << sizeof bird << endl;
    cout << "fish:=" << fish << endl;
}