#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 1, 4, 7, 6, 8};
    int target = 7;
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Target Found";
    }
    else {
        cout << "Target not found";
    }
    return 0;
}  