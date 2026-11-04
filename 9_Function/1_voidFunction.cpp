#include <iostream>
using namespace std;

/* syntax
returnType functionName() {

}

*/

// Function - return, void function

void printName() {
    cout << "Hello this is Sameer";
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    
    // Function Calling
    // printName();

    int arr[5] = {1, 2, 7, 8, -1};
    printArray(arr, 5);

    return 0;
}