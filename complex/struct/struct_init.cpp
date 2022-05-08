#include <iostream>

// struct 声明可以放在 main 之前、方法中
struct inflatable
{
    char name[20];
    float volumn;
    double price;
};

int main()
{
    inflatable hat = {
        {'a'},
        1.0,
        1.0};
    inflatable mainfram = {};
    std::cout
        << hat.price << std::endl;
    mainfram = hat;
    mainfram.price = 5.2;
    hat.price = 5.23;
    std::cout << mainfram.price << std::endl;

    // define two perks struct variables
    struct perks
    {
        int key_number;
        char car[12];
    } mr_smith, ms_jones;

    // define struct with param
    struct perk
    {
        std::string name;
        char dreamCar[23];
    } mr_spider{
        "spider",
        "Audi S7 & Audi A4L"};
    std::cout << mr_spider.name << "`s dreamCar is " << mr_spider.dreamCar << std::endl;

    //指定 struct bit field
    struct torgle_register
    {
        unsigned int SN : 4;
        unsigned int : 4;//4 bit unused，用于填充以符合外部强加的布局
        bool goodIn : 1;
        bool goodTotgle : 1;
    };
    torgle_register tr ={15,true,false};
    if (tr.goodIn)
    {
        std::cout<<tr.SN<<std::endl;
    }
    
}
