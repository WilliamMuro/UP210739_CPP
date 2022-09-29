#include <iostream>
using namespace std;
int main()
{
    char tipo;
    char ingre;

    cout << "Bienvenido a Pizza Bella Napoli"<< endl;
    cout << "Que tipo de pizza desea ordenar:"<< endl;
    cout << "Teclee (V) para ordenar pizza vegetariana o (N) para pizza normal: ";
    cin >> tipo;

    if ((tipo = V) || (tipo = v))
    {
        cout << "Que ingrediente tendra su pizza vegetariana:"<< endl;
        cout << "Teclee (P) para pimiento o (T) para tofu: ";
        cin >> ingre;

        if ((ingre = P) || (ingre = p))
        {
            cout << "Su pizza sera: Vegetariana de pimiento.";
        }

        if ((ingre = T) || (ingre = t))
        {
            cout << "Su pizza sera: Vegetariana de tofu.";
        }
    }
    
    if ((tipo = N) || (tipo = n))
    {
        cout << "Que ingrediente tendra su pizza normal:"<< endl;
        cout << "Teclee (P) para peperoni o (J) para jamon o (S) para salmon: ";
        cin >> ingre;

        if ((ingre = P) || (ingre = p))
        {
            cout << "Su pizza sera: Normal de peperoni.";
        }

        if ((ingre = J) || (ingre = j))
        {
            cout << "Su pizza sera: Normal de jamon.";
        }

        if ((ingre = S) || (ingre = s))
        {
            cout << "Su pizza sera: Normal de salmon.";
        }
    }

    return 0;

}