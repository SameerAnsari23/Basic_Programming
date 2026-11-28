#include <iostream>
using namespace std;
// Base Class
class Vehicle
{
protected:
    int speed = 100;
};
// Derived Class
class Car : public Vehicle
{
public:
    void displaySpeed()
    {
        cout << "Car Speed: " << speed << " km/h" << endl;
    }
};
int main()
{
    Car c1;
    // Accessing protected member through derived class function
    c1.displaySpeed();
    // Direct access is not allowed
    // cout << c1.speed;  // Error
    return 0;
}
