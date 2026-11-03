#include <iostream>
using namespace std;

int main() {
    // int arr[7] = {2, 4, 5, 6, 8};

    /*
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    ...
    */


    // for (int i = 0; i < 7; i++) {
    //     cout << arr[i] << " ";
    // }


    int arr1[5];

    cout << "Enter 5 elements: ";
    
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    
    return 0;
}