#include <iostream>

using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void calcularPrimos(int n) {
    int contador = 0;
    int num = 2;
    while (contador < n) {
        if (esPrimo(num)) {
            cout << num << " ";
            contador++;
        }
        num++;
    }
}

int main() {
    int n;

    cout << "Ingrese la cantidad de números primos a calcular: ";
    cin >> n;

    calcularPrimos(n);

    return 0;
}