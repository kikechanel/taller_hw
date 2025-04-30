#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingresa un numero impar n (n >= 3): ";
    cin >> n;

    if (n < 3 || n % 2 == 0) {
        cout << "Ingresa un numero impar mayor o igual a 3." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == n - 1 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
