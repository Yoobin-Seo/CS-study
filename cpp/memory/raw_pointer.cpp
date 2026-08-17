#include <iostream>

int main()
{
    int* p = new int(10);
    std::cout << *p << std::endl;
    delete p;

    return 0;
}