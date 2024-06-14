#include <iostream>

using namespace std;

float convertirDivisa(float monto, char de, char a) {
    float tasa = 1;
    if (de == 'D' && a == 'E') {
        tasa = 0.86;
    } else if (de == 'D' && a == 'M') {
        tasa = 19.68;
    } else if (de == 'E' && a == 'D') {
        tasa = 1.16;
    } else if (de == 'E' && a == 'M') {
        tasa = 22.84;
    } else if (de == 'M' && a == 'D') {
        tasa = 0.051;
    } else if (de == 'M' && a == 'E') {
        tasa = 0.044;
    }
    return monto * tasa;
}

int main() {
    float monto;
    char de, a;

    cout << "Ingrese el monto: ";
    cin >> monto;
    cout << "Ingrese la divisa de origen (D - Dólar, E - Euro, M - Peso Mexicano): ";
    cin >> de;
    cout << "Ingrese la divisa de destino (D - Dólar, E - Euro, M - Peso Mexicano): ";
    cin >> a;

    cout << "El resultado es: " << convertirDivisa(monto, de, a) << endl;

    return 0;
}