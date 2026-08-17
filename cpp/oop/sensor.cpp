#include <iostream>

class Sensor
{
    public:
        virtual ~Sensor(){
            std::cout << "Sensor deleted" << std::endl;
        };
        virtual void readData() = 0;
};

class Lidar : public Sensor
{
    public:
        ~Lidar(){
            std::cout << "Lidar deleted" << std::endl;
        };
        void readData() override
        {
            std::cout << "Lidar data" << std::endl;
        }
};

class Camera : public Sensor
{
    public:
        ~Camera(){
            std::cout << "Camera deleted" << std::endl;
        };
        void readData() override
        {
            std::cout << "Camera data" << std::endl;
        }
};

class IMU : public Sensor
{
    public:
        ~IMU(){
            std::cout << "IMU deleted" << std::endl;
        };
        void readData() override
        {
            std::cout << "IMU data" << std::endl;
        }
};

int main()
{
    Sensor* sensors[] = {
        new Lidar(),
        new Camera(),
        new IMU()
    };

    for (Sensor* sensor : sensors){
        sensor ->readData();
        delete sensor;
    }
}