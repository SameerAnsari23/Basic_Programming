#include <iostream>
using namespace std;
// Creating a class
class Student
{
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
    // Creating first object
    Student s1;
    // Assigning values to first object
    s1.name = "Rahul";
    s1.rollNumber = 101;
    s1.age = 20;
    // Creating second object
    Student s2;
    // Assigning values to second object
    s2.name = "Aman";
    s2.rollNumber = 102;
    s2.age = 21;
    // Displaying first student details
    cout << "Student 1 Details:" << endl;
    s1.displayDetails();
    cout << endl;
    // Displaying second student details
    cout << "Student 2 Details:" << endl;
    s2.displayDetails();
    return 0;
}
