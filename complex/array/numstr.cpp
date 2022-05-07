#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your hourse built?\n";
    int year;
    (cin >> year).get();
    //1.cin << year; cin.get();
    //2.(cin << year).get(ch)
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year build: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}