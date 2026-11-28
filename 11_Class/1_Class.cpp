#include <iostream>
using namespace std;
// Creating a class
class Student {
public:
    // Data Members
    string name;
    int rollNumber;
    int age;
    // Member Function
    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    return 0;
}
