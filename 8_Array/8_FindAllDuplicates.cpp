#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


// Brute force approach
vector<int>brute(vector<int>&nums, int n) {
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (nums[i] == nums[j]) {
                cnt++;
            } 
            if (cnt == 2) {
                ans.push_back(nums[i]);
                cnt = 0;
            }
        }
    }
    return ans;
}
// T.C - O(N^2) S.C - O(1)


// Best approach
vector<int>best(vector<int>& nums, int n) {
    vector<int>ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n-1; i++) {
        if (nums[i] == nums[i+1]) ans.push_back(nums[i]);
    }
    return ans;
}
// T.C - O(Nlogn) S.C - O(1)


// Optimal Approach
vector<int> optimal(vector<int>& nums, int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int idx = abs(nums[i]) - 1;
        // if Already visited -- store in ans array
        if (nums[idx] < 0) {
            ans.push_back(abs(nums[idx]));
        }
        // if not visited -- > mark presence
        else {
            nums[idx] = -nums[idx];
        }  
    }

    return ans;
}
// T.C - O(N) S.C - O(1)


int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 3, 2, 1};
    // vector<int> ans = brute(arr, arr.size());   // --- {2, 3}
    // vector<int> ans = best(arr, arr.size());   // --- {2, 3}
    vector<int> ans = optimal(arr, arr.size());   // --- {2, 3}
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}