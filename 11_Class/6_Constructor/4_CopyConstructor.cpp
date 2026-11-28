#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    int age;
    // Parameterized Constructor
    Student(string n, int r, int a)    {
        name = n;
        rollNumber = r;
        age = a;
    }

    // Copy Constructor
    Student(const Student &s)    {
        name = s.name;
        rollNumber = s.rollNumber;
        age = s.age;
        cout << "Copy Constructor Called!" << endl;
    }
    void display()    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    // Creating first object
    Student s1("Rahul", 101, 20);
    // Creating second object using first object
    Student s2 = s1;
    cout << "\nFirst Object:" << endl;
    s1.display();
    cout << "\nSecond Object:" << endl;
    s2.display();
    return 0;
}
