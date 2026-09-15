#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int pro = 1;
    for (int i = 1; i <= n; i++) {
        pro = pro * i;
    }

    cout << "Product of n numbers is: " << pro << endl;

    return 0;
}