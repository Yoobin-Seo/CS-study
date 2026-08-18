#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> object_count;
    
    object_count["person"] = 3;
    object_count["car"] = 5;
    object_count["fire"] = 1;

    std::cout << object_count["person"] <<'\n';
    std::cout << object_count["fire"] << std::endl;

    return 0;
}