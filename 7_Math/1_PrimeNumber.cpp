#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    }

    for (int i = 2; i < n/2; i++) {
        if (n % i == 0) {
            // cout << "Not Prime" << endl;
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime Number" << endl;
    }
    else {
        cout << "Not Prime Number" << endl;
    }



    return 0;
}