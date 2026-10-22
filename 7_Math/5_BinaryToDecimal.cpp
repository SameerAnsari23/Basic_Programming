#include <iostream>
using namespace std;

int main() {
    int n, ans = 0, pow = 1;
    cout << "Bhai ek binary number: ";
    cin >> n;

    while (n > 0) {
        int rem = n % 10;
        // ans = ans + rem * pow;
        ans += rem * pow;
        n = n / 10;
        pow = pow * 2;
    }

    cout << ans << endl;
    return 0;
}