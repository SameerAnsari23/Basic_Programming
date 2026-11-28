#include <iostream>
using namespace std;
class Student {
public:
    // Static Data Member
    static int count;
    Student()    {
        count++;
    }
    // Static Member Function
    static void displayCount()    {
        cout << "Total Students: " << count << endl;
    }
};
// Defining Static Data Member
int Student::count = 0;

int main() {
    // Creating objects
    Student s1;
    Student s2;
    Student s3;
    // Calling static member function using class name
    Student::displayCount();
    return 0;
}
