#include <iostream>
using namespace std;
int main()
{
    char type;
    char ingredient;

    cout << "Welcome to the Pizza Bella Napoli"<< endl;
    cout << "What type of pizza do you want to order?"<< endl;
    cout << "Type (V) to order vegetarian pizza or (N) for regular pizza: ";
    cin >> type;

    if ((type == 'V') || (type == 'v'))
    {
        cout << "What ingredient will your vegetarian pizza have?"<< endl;
        cout << "Type (P) for bell pepper or (T) for tofu: ";
        cin >> ingredient;

        if ((ingredient == 'P') || (ingredient == 'p'))
        {
            cout << "Your pizza will be: Vegetarian pepper.";
        }

        if ((ingredient == 'T') || (ingredient == 't'))
        {
            cout << "Your pizza will be: Vegetarian tofu.";
        }
    }
    
    if ((type == 'N') || (type == 'n'))
    {
        cout << "What ingredient will your normal pizza have?"<< endl;
        cout << "Type (P) for pepperoni or (H) for ham or (S) for salmon: ";
        cin >> ingredient;

        if ((ingredient == 'P') || (ingredient == 'p'))
        {
            cout << "Your pizza will be: Normal pepperoni.";
        }

        if ((ingredient == 'H') || (ingredient == 'h'))
        {
            cout << "Your pizza will be: Normal ham.";
        }

        if ((ingredient == 'S') || (ingredient == 's'))
        {
            cout << "Your pizza will be: Normal salmon.";
        }
    }

    return 0;

}