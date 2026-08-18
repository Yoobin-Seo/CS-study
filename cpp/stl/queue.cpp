#include <iostream>
#include <queue>

int main()
{
    std::queue<int> tasks;

    tasks.push(10);
    tasks.push(20);
    tasks.push(30);

    std::cout << tasks.front() << '\n';
    
    tasks.pop();

    std::cout << tasks.front() << std::endl;

    return 0;
}