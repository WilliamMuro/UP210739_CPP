#include <iostream>
using namespace std;
int main()
{
    float age;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 4)
    {
        cout << "The price of the game room is: $0";
    }
    
    if (age > 4)
    {
        cout << "The price of the game room is: $5";
    }
    else
    {
        age <= 18;
    }

    if (age > 18)
    {
        cout << "The price of the game room is: $10";
    }
    
    return 0;
}