#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Aapko kitne star print krne hai..";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << " * ";
    }

    return 0;
}