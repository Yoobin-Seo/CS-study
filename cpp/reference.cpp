#include <iostream>

int main()
{
    int x = 10;
    int& ref = x;
    ref = 20;

    std::cout << "x= " << x << std::endl;
    std::cout << "ref= " << ref << std::endl;

    return 0;
}