#include <iostream>

void print(const int& value)
{
    std::cout << "value= " << value << std::endl;
    //value = 20;
}

int main()
{
    int x = 10;
    print(x);
    std::cout << "x= "<< x << std::endl;
    
    return 0;
}