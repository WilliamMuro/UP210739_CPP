#include <iostream>

using namespace std;

int main()
{
    int number;
    string result;

    cout << "Entry a number decimal: ";
    cin >> number;
    cout << endl;
    do
    {
        if (number > 0)
        {
            while (number != 0)
            {
                result = (number%2 == 0)? "0" + result : "1" + result;

                number /= 2;
            }
        }
        else if (number == 0)
        {
            cout << "Greater than 0";
            cout << endl;
        }
        
    } while (number < 0);

    cout << "The number in binary is: "<< result << endl;
    cout << endl;

    return 0;
}