#include <iostream>

using namespace std;

int main() {
    int cantidad, num, mayor = 0;

    cout << "Ingrese la cantidad de números: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> num;
        if (num > mayor) {
            mayor = num;
        }
    }

    cout << "El mayor número es: " << mayor << endl;

    return 0;
}