#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variable declaration
    int a;
    a = 10; // define the variable
    cout << a << endl;

    cout << fixed << setprecision(19) << endl;
    // float b = 90.03;
    float b = 90.032421987698;
    cout << b << endl;

    char c = 'A';
    cout << c << endl;

    double d = 90.0324979876981234;
    cout << d << endl;

    long long e = 90.032497987698;
    cout << e << endl;

    string s = "Yashmeet Raj";
    cout << s << endl;
    return 0;
}