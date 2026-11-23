// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {   // pick karega
        for (int j = i+1; j < n; j++) {     // traverse karega
            if (arr[i] > arr[j]) {
                return false;
            }
        }
    }

    return true;
}


// Optmial Approach
bool isSorted(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Write C++ code here
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    cout << isSorted(arr) << endl;
    return 0;
}