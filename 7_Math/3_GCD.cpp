#include <iostream>
using namespace std;

int main() {
    int a, b;; 
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    for (int i = min(a,b); i >= 2; i--) {
        if (a%i == 0 && b%i == 0) {
            cout << i;
            break;
        }
    }

    
    return 0;
}