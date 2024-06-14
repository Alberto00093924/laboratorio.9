#include <iostream>

using namespace std;

float calcularPromedio(int cantidad, float numeros[]) {
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += numeros[i];
    }
    return suma / cantidad;
}

int main() {
    int cantidad;
    float numeros[100];

    cout << "Ingrese la cantidad de números: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "El promedio es: " << calcularPromedio(cantidad, numeros) << endl;

    return 0;
}