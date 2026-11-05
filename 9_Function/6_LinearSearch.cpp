#include <iostream>
using namespace std;

bool linearSearch(int arr[], int target, int n) {

    for(int i = 0; i < n; i++) {
        if(arr[i]==target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[5]= {2 , 5, 6, 9, 3};
    int target = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
    if (linearSearch(arr, target, n)) {
        cout << "Target Found" << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
} 