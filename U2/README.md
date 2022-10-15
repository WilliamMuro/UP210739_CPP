<h1 align=center>
UNIT 2
</h>

## Activity 1. (01_Rent.cpp)
The tax brackets for the declaration of income in a given country are the following:<br>

**Income tax rates**<br>

> Less than $10,000 5%<br>
> Among $10,000 y $20,000 15%<br>
> Among $20,000 y $35,000 20%<br>
> Among $35,000 y $60,000 30%<br>
> More of $60,000 45%<br>

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

 - amount: the entered number of the amount of rent to pay.
 - percentage: the exact value that multiplies the quantity variable.
 - taxes: the number returned by the program.<br>

Through if and elese the program identifies the amount and assigns a percentage to obtain, performs a simple operation multiplying the amount variable with the percentage variable and at the end it prints the amount of tax to pay.<br>

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot08-09-18.png)
<br>

2. <br>
![):](/Image/Screenshot08-09-42.png)
<br>

3. <br>
![):](/Image/Screenshot08-10-05.png)
<br>

4. <br>
![):](/Image/Screenshot08-10-30.png)
<br>

5. <br>
![):](/Image/Screenshot08-11-00.png)
<br>

## Activity 2. (02_Benefits.cpp)
In a certain company, its employees are evaluated at the end of each year. The points that can be obtained in the evaluation start at 0.0 and can go up, translating into better benefits. The points you can get employees can be 0.0, 0.4, 0.6 or more, but not intermediate values between the figures mentioned.Below is a table with the levels corresponding to each score. The amount of money earned on each level is $2,400 multiplied by the level score.<br>

**Level Score**<br>

> Unacceptable	0.0<br>
> Acceptable	0.4<br>
> Meritorious	0.6 or more<br>

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

 - level: value entered by the user depending on their score.
 - payment: the total amount that depends on the score the user will get.
 - amount: the amount that the user will receive at the end.<br>

Using an if, the program identifies the user's score and saves it in the level variable, performs a simple operation multiplying the payment and level variables, and finally prints the amount that the user will receive.<br>

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot08-18-04.png)
<br>

2. <br>
![):](/Image/Screenshot08-18-47.png)
<br>

3. <br>
![):](/Image/Screenshot08-19-13.png)
<br>

4. <br>
![):](/Image/Screenshot08-19-40.png)
<br>

## Activity 3. (03_GamePrice.cpp)
Write a program for a company that has arcades for all ages and wants to automatically calculate the price to charge its customers for entering. The program must ask the user for the customer's age and display the price of the ticket. Yes the client is under 4 years old can enter for free, if they are between 4 and 18 years old they must pay $5 and if they are over 18 years old, $10.<br>

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

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot08-25-33.png)
<br>

2. <br>
![):](/Image/Screenshot08-25-55.png)
<br>

3. <br>
![):](/Image/Screenshot08-26-14.png)
<br>

4. <br>
![):](/Image/Screenshot08-26-31.png)
<br>

## Activity 4. (04_Pizza.cpp)
The Bella Napoli pizzeria offers vegetarian and non-vegetarian pizzas to its customers. The ingredients for each type of pizza are listed below.<br>

> Vegetarian ingredients: Pepper and tofu.<br>
> Non-vegetarian ingredients: Pepperoni, Ham and Salmon.<br>

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

 - type: stores the key entered by the user that determines the type of pizza.
 - ingredient: saves the key entered by the user that determines the ingredient.<br>

The program through if asks the user to enter the type of pizza and the ingredient, at the end depending on the type and ingredient it prints what the pizza will be like.<br>

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot08-32-03.png)
<br>

2. <br>
![):](/Image/Screenshot08-32-26.png)
<br>

3. <br>
![):](/Image/Screenshot08-32-51.png)
<br>

4. <br>
![):](/Image/Screenshot08-33-12.png)
<br>

5. <br>
![):](/Image/Screenshot08-33-34.png)
<br>

## Activity 5. (05_Average.cpp)
Make a program in which 6 temperatures are entered and determine the average, the most
the lowest and the highest.<br>

```C++
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
    
    cout << endl;
    cout << "The average of the temperature today is: "<< tempAcum/6 << endl;
    cout << endl;
    cout << "The maximum temperature is: "<< tempMax << endl;
    cout << "The minimum temperature is: "<< tempMin << endl;
    cout << endl;

    return 0;
    
}
```

The program works through 5 variables:<br>

 - counter:sets how many times the user can enter temperatures.
 - temperature: saves entered temperatures.
 - tempMax: the variable in which the maximum temperature is stored.
 - tempMin:the variable in which the minimum temperature is stored.
 - tempAcum: the variable in which the sum of the temperatures is stored.<br>

Using a variable do while, tempAcum stores the sum of each temperature that is entered to obtain an average and print it and with one if the maximum temperature is detected and in another the minimum temperature, configuring a very large value to the minimum temperature so that the if always detects when a number is less than the previous one, and the maximum temperature is set to 0 so that the if always detects when an entered temperature is greater than the previous one.<br>

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot09-37-44.png)
<br>

## Activity 6. (06_Incoice.cpp)
Make a program that reads indefinitely quantities of products and their price, and at the end
indicate the total of the invoice. To know that the purchase has been completed, you must
enter a 0 in the amount.<br>

```C++
#include<iostream>

using namespace std;

int main()
{
    float quantity;
    float price;
    float invoice;
    float addition = 0;

    do
    {
        cout << "Quantity of products: ";
        cin >> quantity;
        cout << "Price of products: $";
        cin >> price;
        cout << endl;
        invoice = quantity*price;
        addition += invoice;

    } while (quantity != 0);
    
    cout << endl;
    cout << "   The total account is: "<< addition << endl;
    cout << endl;

    return 0;
    
}
```
The program works through 4 variables:<br>

 - quantity: save the number of products.
 - price: saves the price of the previously entered product.
 - invoice: save the price of the total number of products.
 - addition: save the sum of the price of the total products.<br>

The program works by means of a (do, while) that asks the user to enter the number of products and their individual price until the user enters the number 0 in the number of products, and at the end multiplies the number of products by its price and add the multiplication of the products.<br>

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot10-00-30.png)
<br>

## Activity 7. (07_Binary.cpp)
Write a program that converts from binary to decimal, only for numbers.
integers greater than 0. The result can be displayed as an integer variable or in a
character set.<br>

```C++
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
```

The program works through three variables:<br>

 - number: save the number entered by the user you want to convert.
 - result: save the operations that form the conversion to binary.<br>

The program uses a division on the entered number and depending on the remainder of the division, a number is stored in the result variable as characters to avoid adding the remainders and thus print the conversion correctly, using a while within an if and else if and inside do while.<br>

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot10-23-50.png)
<br>

## Activity 8. (07_Binary.cpp)
Write a program capable of asking the user to enter the number whose multiplication table he wants to see and what number the table will go to.<br>

```C++
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
```

The program uses 5 variables:<br>

 - number: saves the number the user entered to view their table.
 - multiple: saves the number the user enters to determine the size of the table.
 - result: it is the result of each operation to be carried out on the table.
 - counter: establishes the times in which the operations are going to be carried out so that the table is printed correctly.
 - table: determines the shape of the table depending on the number entered.<br>

One (for) is used to perform a specific number of times the multiplications to the entered number and inside the (for) another (for) is used to format the table, also (\t) is used to create a tab that determines the space to use at the table.<br>

**Program screenshots:**<br>

1. <br>
![):](/Image/Screenshot10-57-32.png)
<br>