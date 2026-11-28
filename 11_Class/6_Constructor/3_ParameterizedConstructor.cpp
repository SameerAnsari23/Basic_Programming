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
    void display()    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
        cout << endl;
    }
};
int main() {
    // Creating objects with different values
    Student s1("Rahul", 101, 20);
    Student s2("Aman", 102, 21);
    cout << "Student 1 Details:" << endl;
    s1.display();
    cout << "Student 2 Details:" << endl;
    s2.display();
    return 0;
}
