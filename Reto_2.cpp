#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar la entrada del usuario
    cout << "Ingresa un n�mero impar n (n >= 5): ";
    cin >> n;

    // Validar que n sea impar y mayor o igual a 5
    if (n < 5 || n % 2 == 0) {
        cout << "Por favor, ingresa un n�mero impar mayor o igual a 5." << endl;
        return 1;
    }

    // Imprimir el patr�n
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            cout << string(n, '*') << endl; // L�nea completa de asteriscos
        } else if (i == n / 2) {
            cout << string(n, '*') << endl; // L�nea completa en el medio
        } else {
            cout << string(n / 2, ' ') << "*" << endl; // Espacios y un asterisco
        }
    }

    return 0;
}

