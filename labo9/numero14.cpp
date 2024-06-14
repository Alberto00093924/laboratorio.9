#include <iostream>

using namespace std;

bool esDivisible(int num, int divisor) {
    return num % divisor == 0;
}

int main() {
    int num;

    cout << "Ingrese un número: ";
    cin >> num;

    if (esDivisible(num, 2)) {
        cout << "El número es divisible por 2" << endl;
    }
    if (esDivisible(num, 3)) {
        cout << "El número es divisible por 3" << endl;
    }
    if (esDivisible(num, 5)) {
        cout << "El número es divisible por 5" << endl;
    }
    if (esDivisible(num, 7)) {
        cout << "El número es divisible por 7" << endl;
    }
    if (esDivisible(num, 11)) {
        cout << "El número es divisible por 11" << endl;
    }

    return 0;
}