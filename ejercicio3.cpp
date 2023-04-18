#include <iostream>

using namespace std; 
int main()
{
    int call; 
    cout << "Cuantas llamadas atendiste en la semana? ";
    cin >> call;
    if (call > 50 && call < 100){
        cout << "obtuviste un bono de C$1,000.00";
         } else if (call > 100 && call < 150){
        cout << "obtuviste un bono de C$1,500.00";
         }  else if (call > 150){
        cout << "obtuviste un bono de C$2,000.00";
    
    } else {
        cout << "No obtuviste ningun bono";
    }
    return 0;
}
