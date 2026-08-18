#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>

int main()
{
    std::vector<std::string> detected_objects;

    detected_objects.push_back("person");
    detected_objects.push_back("car");
    detected_objects.push_back("fire");

    std::unordered_map<std::string, int> object_count;

    object_count["person"] = 2;
    object_count["car"] = 5;
    object_count["fire"] = 1;

    std::queue<std::string> tasks;

    tasks.push("person");
    tasks.push("fire");
    tasks.push("car");

    std::cout << "Detected objects:\n";

    for (const auto& object : detected_objects){
        std::cout << object << '\n';
    }

    std::cout << "\nFire count: " << object_count["fire"] << '\n';

    std::cout << "\nTasks:\n";

    while(!tasks.empty())
    {
        std::string task = tasks.front();
        tasks.pop();

        std::cout << "Processing: " <<task <<'\n';
    }

    return 0;
}