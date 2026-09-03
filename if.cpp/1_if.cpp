#include<iostream>
using namespace std;

int main() {
    // int age;
    // cout<< "enter age";
    // cin>>age;
    // if( age>= 18){
    //     cout<<"ENTER";

    // }
    // else{
    //     cout<< "GET OUT";
    // }
    // return 0;

    // code for find number is even or odd 
    // int n;
    // cin>>n;
    // if(n%2==0){
    //     cout<<"the number is even ";
    // }
    // else{
    //     cout<<"the number is odd";
    // }


    int a, b, c;
    cout << "Enter First Number: " << endl;
    cin >> a;
    cout << "Enter Second Number: " << endl;
    cin >> b;
    cout << "Enter Third Number: " << endl;
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Your first entered number is greater than Second and Third.";
    }
    else if (b >= a && b >= c) {
        cout << "Your Second entered number is greater than First and Third."; 
    }
    else {
        cout << "Your Third entered number is greater than First and Second.";
    }
    return 0;
}



