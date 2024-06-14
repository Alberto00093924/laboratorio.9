#include <iostream>
#include <limits>

using namespace std;

int main() {
    int cantidad, num, menor = numeric_limits<int>::max();

    cout << "Ingrese la cantidad de números: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> num;
        if (num < menor) {
            menor = num;
        }
    }

    cout << "El menor número es: " << menor << endl;

    return 0;
}