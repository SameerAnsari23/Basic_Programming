#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    // int arr[4] = {1, 2, 3, 4};
    // for (int i = 0; i < 4; i++) {
    //     cout << arr[i] << " ";                  1 2 3 4
    // }

    // declaration
    /*
    syntax
    vector<dataType> arrayName(size of array);
    */
    vector<int>a;

    //initialization
    vector<int>a1 = {1, 2, 3, 4};
    cout << a1.size();                        // 4

    // traversing
    for (int i = 0; i < a1.size(); i++) {
        cout << a1[i] << " ";                  
    }
    cout << endl;

    for (int it: a1) {
        cout << it << " ";
    }
    cout << endl;


    // vector<int> a2 = {1, 1, 1, 1, 1};
    vector<int> a2(5, 2);
    for (int it: a2) {
        cout << it << " ";
    }
    cout << endl;

    vector<int> a3(5);
    cout << a3.size() << endl;            // 5
    for (int it: a3) {
        cout << it << " ";                // 0 0 0 0 0 
    }
    cout << endl;

    // Insertion
    a3.push_back(4);
    cout << a3.size() << endl;           // 6
    for (int it: a3) {
        cout << it << " ";               // 0 0 0 0 0 4
    }
    cout << endl;

    //Deletion
    a3.pop_back();
    cout << a3.size() << endl;           // 6
    for (int it: a3) {
        cout << it << " ";               // 0 0 0 0 0 4
    }
    cout << endl;
    
    cout << a3.front();
    cout << endl;

    vector<int>a4 = {1, 7, 9, 3, 6};
    sort(a4.begin(), a4.end());        // increasing
    for (int it: a4) {
        cout << it << " ";               
    }
    cout << endl;

    sort(a4.begin() + 2, a4.end());
    for (int it: a4) {
        cout << it << " ";               
    }
    cout << endl;
    
    int sum = accumulate(a4.begin(), a4.end(), 4);
    cout << sum << endl;

    // sort in decreasing order
    sort(a4.rbegin(), a4.rend());
    for (int it: a4) {
        cout << it << " ";               
    }
    cout << endl;
    return 0;
}