#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese la operación (+, -, *): ";
    cin >> operacion;

    if (operacion == '+') {
        cout << "El resultado es: " << num1 + num2 << endl;
    } else if (operacion == '-') {
        cout << "El resultado es: " << num1 - num2 << endl;
    } else if (operacion == '*') {
        cout << "El resultado es: " << num1 * num2 << endl;
    } else {
        cout << "Operación no válida" << endl;
    }

    return 0;
}