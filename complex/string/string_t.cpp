#include <iostream>
int main()
{
    wchar_t title[] = L"Chief Astrogator\0"; // w_char string
    // char16_t name[] = u"Felonia Ripova";    // char_16 string
    // char32_t car[] = U "Humber Super Snipe"; // char_32 string
    std::cout << title << std::endl;
    // todo

    // raw string
    std::cout << R"(spider study c、c plus plus\n)"
              << std::endl;
}