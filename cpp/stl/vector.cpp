#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << numbers[0] << '\n';
    std::cout << numbers.size() << '\n';

    return 0;
}