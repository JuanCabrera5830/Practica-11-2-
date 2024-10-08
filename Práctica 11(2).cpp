#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, RESUL, T, I;
    string linea;

    cout << "CUANTAS TABLAS: ";
    getline(cin, linea);
    NUM = stoi(linea);  // Convertir la cadena a entero

    T = 1;
    while (T <= NUM) {
        I = 10;
        while (I >= 1) {
            RESUL = T * I;
            cout << T << " * " << I << " = " << RESUL << endl;
            I--;  // Decrementar I
        }
        cout << "Pulse una tecla: ";
        getline(cin, linea);  // Esperar a que el usuario presione una tecla
        T++;  // Incrementar T
    }

    return 0;
}