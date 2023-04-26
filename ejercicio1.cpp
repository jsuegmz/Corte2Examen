#include <iostream>

using namespace std;

float calcularDescuento(float precio, int cantidad){
    float descuento = 0;
    if (cantidad >= 2){
       descuento = precio * cantidad * 0.20;
    }
     return descuento;
}
   

   float calcularIVA(float subtotal){
      return subtotal * 0.15;
   }


   float calcularTotal(float precio, int cantidad){
     float subtotal = precio * cantidad;
     float descuento = calcularDescuento(precio, cantidad);
     float iva = calcularIVA(subtotal);
     return subtotal - descuento + iva;
   }

   int main() {
       float precioArticulo;
       int cantidad;

       cout << "Ingrese el precio del producto: C$";
       cin >> precioArticulo;

       cout << "Ingrese la cantidad a comprar: ";
       cin >> cantidad;

       float total = calcularTotal(precioArticulo, cantidad);

       cout << "Subtotal: C$" << precioArticulo * cantidad << endl;
       cout << "Descuento: C$" << calcularDescuento(precioArticulo, cantidad) << endl;
       cout << "IVA (15%): C$" << calcularIVA(precioArticulo * cantidad) << endl;
       cout << "Total a pagar: C$" << total << endl;
      return 0;
   }