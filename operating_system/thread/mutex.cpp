#include <iostream>
#include <mutex>
#include <thread>

int counter = 0;
std::mutex counter_mutex;

void increase()
{
    for (int i = 0; i < 100000; ++i)
    {
        std::lock_guard<std::mutex> lock(counter_mutex);
        // counter_mutex.lock();

        ++counter;

        // counter_mutex.unlock();
    }
}

int main()
{
    std::thread thread1(increase);
    std::thread thread2(increase);

    thread1.join();
    thread2.join();

    std::cout << "counter: " << counter <<'\n';

    return 0;
}