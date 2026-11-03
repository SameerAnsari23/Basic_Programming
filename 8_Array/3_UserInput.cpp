#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Array ka size enter karo: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " number of array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    // size of array nikalna 
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size << endl;
    return 0;
}