#include <iostream>
using namespace std;
class Student {
public:
    // Constructor
    Student()    {
        cout << "Constructor Called!" << endl;
    }
    // Destructor
    ~Student()    {
        cout << "Destructor Called!" << endl;
    }
};
int main() {
    cout << "Main Function Started" << endl;
    Student s1;
    cout << "Student Object Created" << endl;
    cout << "Main Function Ending" << endl;
    return 0;
}
