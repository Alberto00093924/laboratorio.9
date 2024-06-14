#include <iostream>

using namespace std;

float convertirTemperatura(float temp, char de, char a) {
    if (de == 'C' && a == 'F') {
        return (temp * 9 / 5) + 32;
    } else if (de == 'F' && a == 'C') {
        return (temp - 32) * 5 / 9;
    }
    return temp;
}

int main() {
    float temp;
    char de, a;

    cout << "Ingrese la temperatura: ";
    cin >> temp;
    cout << "Ingrese la escala de origen (C - Celsius, F - Fahrenheit): ";
    cin >> de;
    cout << "Ingrese la escala de destino (C - Celsius, F - Fahrenheit): ";
    cin >> a;

    cout << "El resultado es: " << convertirTemperatura(temp, de, a) << endl;

    return 0;
}