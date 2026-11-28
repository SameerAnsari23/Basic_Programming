#include <iostream>
using namespace std;
class Student {
public:
    string name;
    // Static Data Member
    static int count;
    Student(string n)    {
        name = n;
        count++;
    }
    void display()    {
        cout << "Name: " << name << endl;
    }
};
// Defining Static Data Member
int Student::count = 0;

int main() {
    Student s1("Rahul");
    Student s2("Aman");
    Student s3("Rohit");
    s1.display();
    s2.display();
    s3.display();
    cout << "Total Students: " << Student::count << endl;
    return 0;
}
