#include <iostream>
using namespace std;

int main() {
    int a, b;
    char ch;
    cout << "Enter first number ";
    cin >> a;
    
    cout << "Enter Second Number ";
    cin >> b;

    cout << "Enter a operator ";
    cin >> ch;

    switch(ch) {
        case '+':
        cout << a << "+" << b << " = " << a+b << endl;
        break;

        case '-':
        cout << a << "-" << b << " = " << a-b << endl;
        break;

        case '*':
        cout << a << "*" << b << " = " << a*b << endl;
        break;

        case '/':
        cout << a << "/" << b << " = " << a/b << endl;
        break;

        default:
        cout << "Enter a valid operator" << endl;
        break;
    }
    return 0;
}