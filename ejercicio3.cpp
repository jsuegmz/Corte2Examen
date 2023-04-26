#include <iostream>

using namespace std;

double Bono(int llamadas) {
    if (llamadas > 50 && llamadas < 100) {
        return 1000.00;
    } else if (llamadas >= 100 && llamadas < 150) {
        return 1500.00;
    } else if (llamadas >= 150) {
        return 2000.00;
    } else {
        return 0.00;
    }
}

int main() {
    int llamadas;
    cout << "Ingrese el numero de llamadas que recibo: ";
    cin >> llamadas;

    double bono = Bono(llamadas);

    if (bono > 0.00) {
        cout << "El empleado ha recibido un bono de C$" << bono;
    } else {
        cout << "El empleado no ha alcanzado el monto mínimo de llamadas para recibir un bono";
    }

    return 0;
}