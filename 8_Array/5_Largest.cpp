#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force approach
int largest(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());     // 0, 2, 3, 5, 7, 8

    return arr[n-1];
}


// Optimal Approach
int largest(vector<int>& arr) {
    int n = arr.size();
    // 1st step
    int maxi = arr[0];

    // 2nd step
    for (int i = 1; i < n; i++) {
        // 3rd step
        // if (arr[i] > maxi) {
        //     maxi = arr[i];
        // }
        maxi = max(arr[i], maxi)
    }

    // 4th step;
    return maxi;
}


int main() {
    vector<int> arr = {3, 8, 12, 0, 71, 5, 9};

    cout << largest(arr) << endl;                  // 8
    return 0;
}