#include <iostream>
#include <string>

int main()
{
    std::string robot = "Robot";

    std::cout << robot[0] << '\n';
    std::cout << robot.size() << std::endl;

    robot += " Car";

    std::cout << robot << '\n';

    return 0;
}