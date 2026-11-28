#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    Student s1;
    // Accessing public data members
    s1.name = "Rahul";
    s1.age = 20;
    // Accessing public member function
    s1.display();
    return 0;
}
