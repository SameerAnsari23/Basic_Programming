#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // 1] pahle row pr jaao 
    for(int row = 0; row < n; row++) {
        // 2] coloumn pr traverse karo
        for (int col = 0; col < n - row; col++) {
            // 3] star print karo 
            cout << " * ";
        }
        cout << endl;
    }
    
    // oth row ---> 4 col
    // 1st row ---> 3 col
    // 2nd row ---> 2 col
    // n - row
    

    return 0;
}