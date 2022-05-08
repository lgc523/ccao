#include <iostream>
#include <string>
#include <cstring> //c-style string library
// cstring strcpy strcat

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // copy
    str1 = str2;
    strcpy(charr1, charr2);

    // appending for string objects and character arrays
    str1 += " paste";
    strcat(charr1, " juice");

    // length of a string or a C-style string
    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string: " << str1 << ",contains "
         << len1 << " characters,size:" << str1.size() << ",cap:" << str1.capacity() << endl;
    cout << "The string:" << charr1 << ",contains " << len2 << " characters"
         << ",cap:" << str2.capacity() << endl;

    // memory problem
    char site[10] = "house";
    strcat(site, " of pancakes");
    cout << site << endl;
    cout << strlen(site) << endl;
    cout << sizeof(site) << endl;

    char s1[] = "6";
    char s2[] = "abcd";
    cout << strcat(s1, s2) << endl;

    // empty clear
    string s;
    cout << "s is empty?" << s.empty() << endl;
    s = "clear() can clear string";
    cout << s << endl;
    s.clear();
    cout << "s is empty?" << s.empty() << endl;

    // resize capacity 总空间大小 >= size，额外空间可以优化，会自动拓展
    string resize = "hello,resize";
    cout << "cap:" << resize.capacity() << " ,size:" << sizeof resize << endl;
    resize.resize(5);
    cout << "after resize:" << resize << ",cap:" << resize.capacity() << ",size:" << resize.size() << ",sizeof:" << sizeof resize << endl;
    resize.resize(6, '!');
    cout << "after resize with element:" << resize << ",cap:" << resize.capacity() << ",size:" << resize.size() << ",sizeof:" << sizeof resize << endl;
}