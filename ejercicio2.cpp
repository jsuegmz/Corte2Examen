#include <iostream> 

using namespace std; 

int main()
{
    int ham1, ham2, ham3; 
    float Subtotal, total, IVA;
    cout << "Cuantas hamburguesas sencillas (C$50) vas a llevar: ";
    cin >> ham1;
    cout << "Cuantas hamburguesas dobles (C$75) vas a llevar: ";
    cin >> ham2;
    cout << "Cuantas hamburguesas triples (C$100) vas a llevar: ";
    cin >> ham3;

    Subtotal = (ham1 * 50) + (ham2 * 75) + (ham3 *100);
    IVA = Subtotal * 0.05;
    total = Subtotal + IVA;


    cout << "El precio total despues del cargo del 5% ";
    cout << "es: " << total;  



    return 0;
}
