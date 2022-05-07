#include <iostream>
using namespace std;
int main()
{
    char dog[2] = {'a', 'b'}; // not a string
    char cat[3] = {'c', 'd', '\0'};

    // string constant graceful
    char bird[7] = "spider";
    char fish[] = "shark";

    char shirt_size = 'S';
    // illegal  type mismatch "S" is a address of string S
    //  char shirt_Size = "S';

    cout << "dog:= " << dog << endl; // stop when \0 occur 每次都不一样
    cout << "cat:= " << cat << endl; // let the compiler count

    cout << "bird:=" << bird << endl;
    cout << "sizeof bird=" << sizeof bird << endl;
    cout << "fish:=" << fish << endl;

    //拼接字符串常量
    cout << "I`d give my right arm to be" " a great vinlinist.\n";
    cout <<"I`d give my right arm to be a great violinist.\n";
    cout <<"I`d give my right ar"
    "m to be a great violinist.\n";
}