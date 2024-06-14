#include <iostream>
#include <cmath>

using namespace std;

float calcularAreaCuadrado(float lado) {
    return lado * lado;
}

float calcularPerimetroCuadrado(float lado) {
    return 4 * lado;
}

float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}

float calcularPerimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);
}

float calcularAreaTriangulo(float lado1, float lado2, float lado3) {
    float s = (lado1 + lado2 + lado3) / 2;
    return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
}

float calcularPerimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

int main() {
    float lado, base, altura, lado1, lado2, lado3;
    char figura;

    cout << "Ingrese la figura (C - Cuadrado, R - Rectangulo, T - Triangulo): ";
    cin >> figura;

    if (figura == 'C' || figura == 'c') {
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;
        cout << "El área del cuadrado es: " << calcularAreaCuadrado(lado) << endl;
        cout << "El perímetro del cuadrado es: " << calcularPerimetroCuadrado(lado) << endl;
    } else if (figura == 'R' || figura == 'r') {
        cout << "Ingrese la base del rectangulo: ";
        cin >> base;
        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;
        cout << "El área del rectangulo es: " << calcularAreaRectangulo(base, altura) << endl;
        cout << "El perímetro del rectangulo es: " << calcularPerimetroRectangulo(base, altura) << endl;
    } else if (figura == 'T' || figura == 't') {
        cout << "Ingrese el lado 1 del triangulo: ";
        cin >> lado1;
        cout << "Ingrese el lado 2 del triangulo: ";
        cin >> lado2;
        cout << "Ingrese el lado 3 del triangulo: ";
        cin >> lado3;
        cout << "El área del triángulo es: " << calcularAreaTriangulo(lado1, lado2, lado3) << endl;
        cout << "El perímetro del triángulo es: " << calcularPerimetroTriangulo(lado1, lado2, lado3) << endl;
    } else {
        cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
    }

    return 0;
}