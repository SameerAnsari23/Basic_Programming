#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
void rotateBruteForce(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;                                 // 'k' ki value ko n ki range mein laane ke liye

    for (int step = 1; step <= k; step++) {
        int last = nums[n - 1];               // Save last element first
        for (int i = n - 1; i > 0; i--) {     // Shift right-to-left
            nums[i] = nums[i - 1];
        }
        nums[0] = last;                       // Put saved element at index 0
    }
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotateBruteForce(arr, k);
    for (int it: arr) {
        cout << it << " ";
    }
    return 0;
}