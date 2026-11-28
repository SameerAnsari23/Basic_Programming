#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNumber;
    int age;

    // Constructor
    Student(){
        name ;
        rollNumber;
        age;
        cout << "Constructor Called!" << endl;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{   // Creating an object
    Student s1;

    // Displaying student details
    // s1.display();

    return 0;
}
