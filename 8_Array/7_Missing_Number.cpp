#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int missing(vector<int>& arr) {
    int n = arr.size();
    // 1. Sort
    sort(arr.begin(), arr.end());

    // 2. Apply Logic
    for (int i = 0; i < arr.size(); i++) {
        if (i != arr[i]) {
            return i;
        }
    }

    return n;
}

int optimalSol(vector<int>& nums) {
    int n = nums.size(), arraySum = 0;

    int totalSum = (n*(n+1))/2;
    for (int i = 0; i < n; i++) {
        arraySum = arraySum + nums[i];
    }
    return totalSum - arraySum;
}


int xorApp(vector<int>& nums) {
    int n = nums.size();
    int ans = n;

    for (int i = 0; i < n; i++) {
        ans = ans ^ i ^ nums[i];
    }
    return ans;
}

int main() {
    vector<int>arr = {1, 0, 3};

    // cout << missing(arr);
    // cout << optimalSol(arr);
    cout << xorApp(arr);
    return 0;
}