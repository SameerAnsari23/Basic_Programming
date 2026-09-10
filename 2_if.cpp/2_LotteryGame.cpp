#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your Lucky Number: " << endl;
    cin >> n;

    // MacBook
    if (n >= 300 && n <= 460) {
        cout << "You won MacBook." << endl;

        if (n >= 300 && n <= 380) {
            cout << "Model: M4 Mac" << endl;
        }
        else if (n >= 381 && n <= 460) {
            cout << "Model: M5 Mac" << endl;
        }
    }

    // Kurkure
    else if (n >= 200 && n <= 280) {
        cout << "You won Kurkure." << endl;

        if (n >= 200 && n <= 240) {
            cout << "Flavor: Chilli Kurkure" << endl;
        }
        else if (n >= 241 && n <= 280) {
            cout << "Flavor: Onion Kurkure" << endl;
        }
    }

    // Cycle Range
    else if (n >= 1100 && n <= 1500) {
        cout << "You won Cycle." << endl;

        if (n >= 1100 && n <= 1300) {
            cout << "Brand: Avon Cycle" << endl;
        }
        else if (n >= 1301 && n <= 1500) {
            cout << "Brand: Hero Cycle" << endl;
        }
    }

    // Bike
    else if (n >= 50 && n <= 80) {
        cout << "You won Kurkure." << endl;

        if (n >= 50 && n <= 65) {
            cout << "Flavor: Chilli Kurkure" << endl;
        }
        else if (n >= 66 && n <= 80) {
            cout << "Flavor: Onion Kurkure" << endl;
        }
    }

    
    return 0;
}