#include <iostream>
using namespace std;
int main()
{
    char type;
    char ingredient;

    cout << "   Welcome to the Pizza Bella Napoli"<< endl;
    cout << endl;
    cout << "What type of pizza do you want to order?"<< endl;
    cout << "Type (V) to order vegetarian pizza or (R) for regular pizza."<< endl;
    cout << "   R = ";
    cin >> type;
    cout << endl;

    if ((type == 'V') || (type == 'v'))
    {
        cout << "What ingredient will your vegetarian pizza have?"<< endl;
        cout << "Type (P) for bell pepper or (T) for tofu."<< endl;
        cout << "   R = ";
        cin >> ingredient;
        cout << endl;

        if ((ingredient == 'P') || (ingredient == 'p'))
        {
            cout << "Your pizza will be: Vegetarian pepper."<< endl;
        }

        if ((ingredient == 'T') || (ingredient == 't'))
        {
            cout << "Your pizza will be: Vegetarian tofu."<< endl;
        }
    }
    
    if ((type == 'R') || (type == 'r'))
    {
        cout << "What ingredient will your normal pizza have?"<< endl;
        cout << "Type (P) for pepperoni or (H) for ham or (S) for salmon."<< endl;
        cout << "   R = ";
        cin >> ingredient;
        cout << endl;

        if ((ingredient == 'P') || (ingredient == 'p'))
        {
            cout << "Your pizza will be: Regular pepperoni."<< endl;
        }

        if ((ingredient == 'H') || (ingredient == 'h'))
        {
            cout << "Your pizza will be: Regular ham."<< endl;
        }

        if ((ingredient == 'S') || (ingredient == 's'))
        {
            cout << "Your pizza will be: Regular salmon."<< endl;
        }
    }

    cout << endl;

    return 0;

}