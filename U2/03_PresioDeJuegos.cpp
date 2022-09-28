//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso de mainspace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    float edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <= 4)
    {
        cout << "El presio de la sala de juegop es: $0";
    }
    
    if (edad > 4)
    {
        cout << "El presio de la sala de juegop es: $5";
    }
    else
    {
        edad <= 18;
    }

    if (edad > 18)
    {
        cout << "El presio de la sala de juegop es: $10";
    }
    
    return 0;
}