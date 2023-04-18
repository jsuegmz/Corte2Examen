#include <iostream>
#using namespace std;

int main() {
    float precioProducto, descuento, subtotal, iva, total;
    int cantida;

    cout << "Ingrese el precio del Producto: $";
    cin >> precioProducto;

    cout << "Ingrese la cantidad a comprar: ";
    cin >> cantida;

    descuento = 0;
    subtotal = precioProducto * cantida;

    if (cantida >= 2) {
        descuento = subtotal * 0.20;
    }

    iva = subtotal * 0.15;
    total = subtotal - descuento + iva;

    
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "IVA (15%): $" << iva << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
