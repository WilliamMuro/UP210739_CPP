#include <iostream>

using namespace std;

int main()
{
    float number, multiple, result, counter, table;

    cout << "Type the number to multiply: ";
    cin >> number;
    cout << "Type how many times to multiply: ";
    cin >> multiple;
    cout << endl;

    for (float counter = 1;counter <= multiple; counter++)
    {
        result = number*counter;
        cout << "|";
        
        for (float table = 0; table < 47; table++)
        {
            cout << "-";
        }
        cout << "|";
        cout << "\n";
        cout << "|" << "\t" << number << "\t" << "*" << "\t" << counter << "\t" << "=" << "\t" << result << "\t" << "|" << endl;
    }

    cout << "|";
        
    for (float table = 0; table < 47; table++)
    {
         cout << "-";
    }
    cout << "|" << endl;
    cout << endl;

    return 0;
}