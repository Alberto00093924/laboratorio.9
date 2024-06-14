#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limiteInferior, limiteSuperior, sumaTotal = 0, multiplicativaTotal = 1;
    bool esPrimoSuma = true, esPrimoMultiplicativa = true;

    cout << "Ingrese el límite inferior: ";
    cin >> limiteInferior;
    cout << "Ingrese el límite superior: ";
    cin >> limiteSuperior;

    for (int i = limiteInferior; i <= limiteSuperior; i++) {
        sumaTotal += i;
        multiplicativaTotal *= i;

        if (!esPrimo(i)) {
            esPrimoSuma = false;
        }
        if (!esPrimo(multiplicativaTotal)) {
            esPrimoMultiplicativa = false;
        }
    }

    cout << "La sumatoria total es: " << sumaTotal << endl;
    cout << "La multiplicativa total es: " << multiplicativaTotal << endl;

    if (esPrimoSuma) {
        cout << "La sumatoria total es un número primo." << endl;
    } else {
        cout << "La sumatoria total no es un número primo." << endl;
    }

    if (esPrimoMultiplicativa) {
        cout << "La multiplicativa total es un número primo." << endl;
    } else {
        cout << "La multiplicativa total no es un número primo." << endl;
    }

    return 0;
}