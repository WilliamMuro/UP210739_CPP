#include <iostream>

using namespace std;

int main()
{
    int number;
    string result;

    cout << "Entry a number decimal "; 
    cin >> number; 
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
            cout << "Mayor a cero";
        }
        
    } while (number < 0);

    cout << "The number in binary is: "<< result << endl;

    return 0;
}