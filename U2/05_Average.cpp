#include<iostream>

using namespace std;

int main()
{
    int counter=1;
    float temperature;
    float tempMax = 0;
    float tempMin = 999;
    float tempAcum = 0;
    do
    {
        cout << "Type the temperature: ";
        cin >> temperature;
        tempAcum += temperature;
        counter++;
        if (temperature <= tempMin)
        {
            tempMin = temperature;
        }
        if (temperature >= tempMax)
        {
            tempMax = temperature;
        }
    } while (counter <= 6);

    cout << "The average of the temperature today is: "<< tempAcum/6 << endl;
    cout << "The maximum temperature is: "<< tempMax << endl;
    cout << "The minimum temperature is: "<< tempMin << endl;

    return 0;
    
}