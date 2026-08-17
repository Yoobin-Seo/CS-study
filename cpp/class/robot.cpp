#include <iostream>

class Robot
{
    private:
        int speed;
    public:
        Robot(int speed)
            : speed(speed)
        {
            std::cout << "Robot Constructor" << std::endl;
        }
        ~Robot()
        {  
            std::cout << "Robot destroyed" << std::endl;
        }
        void setSpeed(int speed){
            std::cout << "setSpeed() called" << std::endl;
            this -> speed = speed;
        }
        int getSpeed() const{
            std::cout << "getSpeed() called" << std::endl;
            return speed;
        }
};

int main()
{
    std::cout << "main start" << std::endl;
    {
        Robot robot(30);
        std::cout << "inside block" << std::endl;
        
        std::cout << robot.getSpeed() <<std::endl;
        robot.setSpeed(50);
        int speed = robot.getSpeed();
        std::cout << speed <<std::endl;

        //robot.speed = 100;
        //robot.setSpeed(100);
    }

    std::cout << "main end" << std::endl;
    
    return 0;
}