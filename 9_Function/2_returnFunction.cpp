#include <iostream>
using namespace std;

/* syntax
returnType functionName() {

}

*/

// Function - return, void function



// return function
int add(int &a, int b) {
    int sum = a + b;
    a = a + 1;
    b = b + 1
    return a;
}

int main() {
    int a = 10, b = 9;

    // Function Calling
    cout << add(a, b);
    return 0;
}