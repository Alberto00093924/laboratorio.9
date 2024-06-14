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

int main() {
    int num;

    cout << "Ingrese un número: ";
    cin >> num;

    if (esPrimo(num)) {
        cout << "El número es primo" << endl;
    } else {
        cout << "El número no es primo" << endl;
    }

    return 0;
}