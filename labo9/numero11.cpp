#include <iostream>

using namespace std;

float operar(float num1, float num2, char operador) {
    if (operador == '+') {
        return num1 + num2;
    } else if (operador == '-') {
        return num1 - num2;
    } else if (operador == '*') {
        return num1 * num2;
    } else if (operador == '/') {
        if (num2 == 0) {
            throw invalid_argument("División entre cero no está permitida");
        }
        return num1 / num2;
    }
}

int main() {
    float num1, num2;
    char operador;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    try {
        cout << "El resultado es: " << operar(num1, num2, operador) << endl;
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }

    return 0;
}