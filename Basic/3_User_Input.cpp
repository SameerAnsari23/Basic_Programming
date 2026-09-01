#include<iostream>
using namespace std;

int main() {
    // int a = 10;

    // input  --> cin
    // int a;
    // cout << "Enter some integer value: " << endl;
    // cin >> a;
    // cout << a << endl;

    // float b;
    // cout << "Enter some decimal value: ";
    // cin >> b;
    // cout << b << endl;

    // char c;
    // cout << "Enter any character: ";
    // cin >> c;
    // cout << c << endl;


    bool d = false;
    cout << d << endl;

    string s;
    cout << "Enter your name: ";
    // cin >> s;
    getline(cin, s);
    cout << s;

    string s1;
    cout << "Enter your native place: ";
    getline(cin, s1);
    cout << s1 << endl;

    return 0;
}