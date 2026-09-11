#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter you current age: ";
    cin >> age;

    switch(age >= 18) {
        case true: 
        cout << "You can enter in the club" << endl;
        break;

        case false:
        cout << "You can not enter in the club" << endl;
        break;
    } 
    return 0;
}