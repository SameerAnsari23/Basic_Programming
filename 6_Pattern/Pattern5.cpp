#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        // space print krne ke liye
        for (int col = 0; col < n - row - 1; col++) {
            cout << "   ";
        }

        // star print krte hai
        for (int col = 0; col < row + 1; col++) {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}