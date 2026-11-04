#include <iostream>
using namespace std;

int product(int x, int y) {
    int z = x * y;
    x = x + 1;
    y = y + 1;
    return z;
}

int main() {
    int a = 10, b = 8;
    cout << product(a, b) << endl;
    cout << a << " " << b << endl;                    // 10  8
    return 0;
}