#include <iostream>
using namespace std;
int main()
{
    double level;
    float payment;
    float amount;

    payment = 2400;

    cout << "Performance levels:"<< endl;
    cout << "   0.0"<< endl;
    cout << "   0.4"<< endl;
    cout << "   0.6 or more..."<< endl;
    cout << endl;
    cout << "Please indicate your performance level: ";
    cin >> level;
    cout << endl;

    if ((level == 0.0) || (level == 0.4) || (level >= 0.6))
    {
        amount = payment*level;
        cout << "The amount you will receive is: $"<< amount << endl;
    }

    cout << endl;

    return 0;
}