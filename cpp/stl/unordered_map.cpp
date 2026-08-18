#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> object_count;

    object_count["person"] = 3;
    object_count["car"] = 5;
    object_count["fire"] = 1;

    std::cout << object_count["person"] << std::endl;
    std::cout << object_count["fire"] << '\n';

    return 0;
}