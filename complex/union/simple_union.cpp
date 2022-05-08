#include <iostream>

int main()
{
    using namespace std;
    union one4all
    {
        int int_val;
        long long_val;
        double double_val;
    };
    one4all pail;
    pail.int_val = 523;
    std::cout << pail.int_val << std::endl;
    pail.double_val = 5.23; // store a double ,int value is lost
    std::cout << pail.double_val << std::endl;
    std::cout << pail.int_val << std::endl;
    std::cout << pail.long_val << std::endl;

    // anonymous union
    struct widget
    {
        char brand[20];
        int type;
        union
        {
            long id_num;
            char id_char[20];
        };
    };
    widget prize={"",1};
    if (prize.type == 1)
    {
        cout <<"prize type is 1";
        cin >> prize.id_num;
        cout << prize.id_num;
    }
    else
    {
        cin >> prize.id_char;
        cout << prize.id_char;
    }
}