#include <iostream>

using namespace std;

float calcularCUM(int materias, float notas[], float uv[]) {
    float suma = 0;
    for (int i = 0; i < materias; i++) {
        suma += notas[i] * uv[i];
    }
    return suma;
}

int main() {
    int materias;
    float notas[100];
    float uv[100];

    cout << "Ingrese la cantidad de materias: ";
    cin >> materias;

    for (int i = 0; i < materias; i++) {
        cout << "Ingrese la nota de la materia " << i + 1 << ": ";
        cin >> notas[i];
        cout << "Ingrese las unidades valorativas de la materia " << i + 1 << ": ";
        cin >> uv[i];
    }

    cout << "El CUM es: " << calcularCUM(materias, notas, uv) << endl;

    return 0;
}