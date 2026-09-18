/*

syntax
while(condition) {
    // block of code 
}

*/


#include<iostream>
using namespace std;

int main () {

    // Print 1 n times
    int n; 
    cout << "Enter a number: ";
    cin >> n;

    int cnt = 1;
    while(cnt <= n){
        // cout << " 1 " ;
        cout << cnt << endl;
        cnt++;
    }
 
    return 0;
}