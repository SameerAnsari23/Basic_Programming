#include <iostream>
using namespace std;

int main() {
    int n, ans = 0, place = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        int rem = n % 2;
        ans = ans + rem * place;
        n = n / 2;
        place = place * 10;
    }
    cout << ans << endl;

    return 0;
}