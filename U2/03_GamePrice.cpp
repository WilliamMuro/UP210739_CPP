#include <iostream>
using namespace std;
int main()
{
    double age;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 4)
    {
        cout << "The price of the game room is: $0";
    }
    
    else if (age > 4 && age <= 18)
    {
        cout << "The price of the game room is: $5";
    }

    if (age > 18)
    {
        cout << "The price of the game room is: $10";
    }
    
    return 0;
}