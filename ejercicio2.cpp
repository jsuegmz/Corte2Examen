#include <iostream> 

using namespace std; 

float calSubtotal(int ham1, int ham2, int ham3) {
    return (ham1 * 50) + (ham2 * 75) + (ham3 *100);
}

float calIVA(float subtotal) {
    return subtotal * 0.05;
}

float calTotal(float subtotal, float iva) {
    return subtotal + iva;
}

void PrecioTotal(float total) {
    cout << "El precio total despues del IVA del 5% es: C$" << total << endl;
}

int main()
{
    int ham1, ham2, ham3; 
    float subtotal, total, iva;

    cout << "Cuantas hamburguesas sencillas (C$50) vas a llevar: ";
    cin >> ham1;
    cout << "Cuantas hamburguesas dobles (C$75) vas a llevar: ";
    cin >> ham2;
    cout << "Cuantas hamburguesas triples (C$100) vas a llevar: ";
    cin >> ham3;

    subtotal = calSubtotal(ham1, ham2, ham3);
    iva = calIVA(subtotal);
    total = calTotal(subtotal, iva);

    PrecioTotal(total);

    return 0;
}
