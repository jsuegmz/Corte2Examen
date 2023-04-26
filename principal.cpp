#include <iostream>
#include "ejercicio1.cpp"
#include "ejercicio2.cpp"
#include "ejercicio3.cpp"

using namespace std;

int main()
{
    int eleccion;
    cout << "Prueba del segundo corte de Logica y Algoritmos, elija que ejercicio ver" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "4. Salir" << endl;
    cin >> eleccion;

    if(eleccion==1)
    {
        ejercicio1();
        main();
    }
    if(eleccion==2)
    {
        ejercicio2();
        main();
    }
    if(eleccion==3)
    {
        ejercicio3();
        main();
    }
    if(eleccion==4)
    {
        cout <<"Programa terminado";
    }
    if(eleccion<1||eleccion>4)
    {
        cout << "Ingrese un numero valido" << endl;
        main();
    }

    return 0;
}
