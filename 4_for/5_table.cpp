/*

Print table of 7
7 x 1 = 7  (7*1)
7 x 2 = 14 (7*2)
7 x 3 = 21 (7*3)

for (int i = 1; i <= 10; i++) {
    cout << "7 x " << i << " = " << 7*i;
}


"7 x "
*/




#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number jiska aapko table chahiye: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }
    return 0;
}