#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    int age;



    // Default Constructor
    Student()    {
        name = "Unknown";
        rollNumber = 0;
        age = 0;
    }
    void display()    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    // Creating an object
    Student s1;
    s1.display();
    return 0;
}
