#include <iostream>
using namespace std;

int main() {
    // Syntax
    // dataType arrayName[Size] = {d1, d2, d3, ...};

    float arr[5] = {1.09, 2.094, 8.0, 4.02};

    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}