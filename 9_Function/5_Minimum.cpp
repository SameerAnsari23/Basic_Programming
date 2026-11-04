#include <iostream>
using namespace std;

int minimum(int arr[], int n) {
    int mini = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }

    return mini;
}

int maximum(int arr[], int n) {
    int maxi = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main() {
    int arr[6] = {8, 4, 5, 1, 0, 3};
    cout << minimum(arr, 6) << endl;
    cout << maximum(arr, 6) << endl;
    return 0;
}