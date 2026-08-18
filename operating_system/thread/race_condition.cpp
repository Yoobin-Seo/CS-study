#include <iostream>
#include <thread>

int counter = 0;

void increase()
{
    for (int i = 0; i < 100000; ++i)
    {
        ++counter;
    }
}

int main()
{
    std::thread thread1(increase);
    std::thread thread2(increase);

    thread1.join();
    thread2.join();

    std::cout << "counter: " << counter << '\n';

    return 0;
}