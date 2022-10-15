#include <iostream>
using namespace std;
int main()
{
    double age;

    cout << "   GAME PRICE"<< endl;
    cout << endl;
    cout << endl;
    cout << "Enter your age: ";
    cin >> age;
    cout << endl;

    if (age <= 4)
    {
        cout << "The price of the game room is: $0"<< endl;
    }
    
    else if (age > 4 && age <= 18)
    {
        cout << "The price of the game room is: $5"<< endl;
    }

    if (age > 18)
    {
        cout << "The price of the game room is: $10"<< endl;
    }

    cout << endl;
    
    return 0;
}