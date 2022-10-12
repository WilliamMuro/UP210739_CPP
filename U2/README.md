<h1 align=center>
UNIT 2
</h>

#### Activity 1. (01_Rent.cpp)
The tax brackets for the declaration of income in a given country are the following:<br>

Income tax rates<br>
Less than $10,000 5%<br>
Among $10,000 y $20,000 15%<br>
Among $20,000 y $35,000 20%<br>
Among $35,000 y $60,000 30%<br>
More of $60,000 45%<br>

Write a program that asks the user for their annual income and shows the corresponding tax rate on the screen.<br>

```C++
#include <iostream>
using namespace std;
int main()
{
    double amount;
    float percentage;
    float taxes;

    cout << "Enter the amount to pay rent annually: ";
    cin >> amount;
    cout << endl;

    if (amount >= 0) {
        percentage = 0.05;
    }
    else
    {
        amount <= 10000;
    }

    if (amount > 10000) {
        percentage = 0.15;
    }
    else
    {
        amount <= 20000;
    }
    
    if (amount > 20000) {
        percentage = 0.20;
    }
    else
    {
        amount <= 35000;
    }

    if (amount > 35000) {
        percentage = 0.30;
    }
    else
    {
        amount <= 60000;
    }

    if (amount > 60000) {
        percentage = 0.45;
    }
    cout << " - Your tax is: "<< percentage << endl;

    taxes = amount*percentage;

    cout << " - The amount of tax to pay is: "<< taxes << endl;
    cout << endl;

    return 0;
}
```

The program works from three variables:<br>

1. amount: the entered number of the amount of rent to pay.
2. percentage: the exact value that multiplies the quantity variable.
3. taxes: the number returned by the program.<br>

Through if and elese the program identifies the amount and assigns a percentage to obtain, performs a simple operation multiplying the amount variable with the percentage variable and at the end it prints the amount of tax to pay.<br>

Program screenshots:<br>

![):](/Image/Captura desde 2022-10-12 08-09-18.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-09-42.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-10.05.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-10-30.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-11-00.png)
<br>

#### Activity 2. (02_Benefits.cpp)
In a certain company, its employees are evaluated at the end of each year. The points that can be obtained in the evaluation start at 0.0 and can go up, translating into better benefits. The points you can get employees can be 0.0, 0.4, 0.6 or more, but not intermediate values between the figures mentioned.Below is a table with the levels corresponding to each score. The amount of money earned on each level is $2,400 multiplied by the level score.<br>

Level Score<br>

Unacceptable	0.0<br>
Acceptable	0.4<br>
Meritorious	0.6 or more<br>

Write a program that reads the user's score and indicates their level of performance, as well as the amount of money the user will receive.
Thank you very much for choosing us! We look forward to serving you again.<br>

```C++
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
```

The program works from three variables:<br>

1. level: value entered by the user depending on their score.
2. payment: the total amount that depends on the score the user will get.
3. amount: the amount that the user will receive at the end.<br>

Using an if, the program identifies the user's score and saves it in the level variable, performs a simple operation multiplying the payment and level variables, and finally prints the amount that the user will receive.<br>

Program screenshots:<br>

![):](/Image/Captura desde 2022-10-12 08-18-04.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-18-47.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-19-13.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-19-40.png)
<br>

#### Activity 3. (03_GamePrice.cpp)
Write a program for a company that has arcades for all ages and wants to automatically calculate the price to charge its customers for entering. The
The program must ask the user for the customer's age and display the price of the ticket. Yes
the client is under 4 years old can enter for free, if they are between 4 and 18 years old they must pay $5 and if they are over 18 years old, $10.<br>

```C++
#include <iostream>
using namespace std;
int main()
{
    double age;

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
```

The program only works with the age variable, which is a number entered by the user, using if and else the program identifies to which age group the number belongs and prints the price to pay.<br>

Program screenshots:<br>

![):](/Image/Captura desde 2022-10-12 08-25-33.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-25-55.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-26-14.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-26-31.png)
<br>

#### Activity 4. (04_Pizza.cpp)
The Bella Napoli pizzeria offers vegetarian and non-vegetarian pizzas to its customers. The ingredients for each type of pizza are listed below.
- Vegetarian ingredients: Pepper and tofu.
- Non-vegetarian ingredients: Pepperoni, Ham and Salmon.
Write a program that asks the user if he wants a vegetarian pizza or not, and based on his answer shows him a menu with the ingredients available for him to choose from. You can only choose one ingredient besides the mozzarella and tomato that are in all the pizzas.<br>

```C++
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
```

The program uses two variables:<br>

1. type: stores the key entered by the user that determines the type of pizza.
2. ingredient: saves the key entered by the user that determines the ingredient.<br>

The program through if asks the user to enter the type of pizza and the ingredient, at the end depending on the type and ingredient it prints what the pizza will be like.<br>

Program screenshots:<br>

![):](/Image/Captura desde 2022-10-12 08-32-03.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-32-26.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-32-51.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-33-12.png)
<br>
![):](/Image/Captura desde 2022-10-12 08-33-34.png)
<br>