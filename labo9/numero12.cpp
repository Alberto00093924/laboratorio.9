#include <iostream>
#include <algorithm>

using namespace std;

void ordenarNumeros(int numeros[], int n) {
    sort(numeros, numeros + n);
}

int main() {
    int numeros[100];
    int n;

    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    ordenarNumeros(numeros, n);

    cout << "Los números ordenados son: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}