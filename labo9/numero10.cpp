#include <iostream>

using namespace std;

float calcularArea(float radio) {
    return 3.14159 * radio * radio;
}

int main() {
    float radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    cout << "El área del círculo es: " << calcularArea(radio) << endl;

    return 0;
}