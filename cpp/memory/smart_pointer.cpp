#include <iostream>
#include <memory>

int main()
{
    auto unique = std::make_unique<int>(10);

    auto shared1 = std::make_shared<int>(20);
    auto shared2 = shared1;

    std::weak_ptr<int> weak = shared1;

    std::cout << *unique << std::endl;
    std::cout << *shared1 << std::endl;
    std::cout << *shared2 << std::endl;

    std::cout << shared1.use_count() << std::endl;

    return 0;
}