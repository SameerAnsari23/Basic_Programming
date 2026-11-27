#include <iostream>
using namespace std;

// Non - return Type function
void sum(int x, int y) {
    cout << "Sum: " << x + y << endl;
}


// Return - Type function
float substraction(int &x, int &y) {
    x = x + 1;
    int z = x - y;
    return z;
}


int main() {
    // Syntax
    // dataType arrayName[Size] = {d1, d2, d3, ...};

    float arr4[5] = {1.09, 2.094, 8.0, 4.02};

    cout << sizeof(arr4) / sizeof(arr4[0]) << endl;

    int n = sizeof(arr4) / sizeof(arr4[0]);
    for (int i = 0; i < n; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;





    /*************************Function************************/
    // Sum
    int a, b;
    cin >> a >> b;
    // cout << "Sum: " << a + b << endl;
    sum(a, b);
    
    // subtraction
    // cout << "Substraction: " << a - b << endl;
    cout << "Substraction : " << substraction(a, b) << endl;
    cout << "a: " << a << endl;

    // Multiplication 
    cout << "Multiplication: " << a * b << endl;

    // Division
    cout << "Division: " << a / b << endl;




    /****************************Vector********************/
    vector<int>arr(5);
    vector<int>arr1 = {21, 14, 5, 6};
    cout << "size: " << arr1.size() << endl;
    int n = arr1.size(); 
    
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // insertion
    arr1.push_back(7);
    n = arr1.size();
    // sort(arrayName.startingIndex, arrayName.endingIndex);
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // delete element from last index
    arr1.pop_back();
    n = arr1.size();
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;


    vector<int>v(5, 2);
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}