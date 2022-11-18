<h1 align=center>
UNIT 3
</h1>

<br>In this folder you will find the game "Cat Game" [(Cat.pp)](https://github.com/UP210739/UP210739_CPP/blob/main/U3/Cat.cpp) written in the C++ programming language.
<br>

# 
<h1 align=center>
<sub>Index</sub>
</h1>
<br>

1. Execution instructions. (Instructions for execution, use and general considerations).
2. Flowchart.
3. Development and explanation. (Execution instructions of code execution).
4. Conclusion.
<br>

# 
### 1. Execution instructions.
Start running the Cat Game program, which is just user vs. computer, the program will ask the user to enter the number of the box that the **X** will be placed on and as soon as a box is selected, the an **X** will appear will be printed and the **O** placed by the computer, the first to complete a consecutive row of their respective **X** or **O** symbol wins.
<br>

#
### 2. Flowchart.
<div align ="center">
<img src="/Image/code2flow_BynvqX.png"/><br><img src="/Image/code2flow_BynvqX%20(1).png"/><br><img src="/Image/code2flow_BynvqX%20(2).png"/><br><img src="/Image/code2flow_BynvqX%20(3).png"/><br><img src="/Image/code2flow_BynvqX%20(4).png"/><br><img src="/Image/code2flow_BynvqX%20(5).png"/>
</div>
<br>

#
### 3. Development and explanation.
```C++
#include <iostream>
#include <time.h>

using namespace std;

void game(char board[3][3]);
void enterMove(char board[3][3]);
void boardBody(char board[3][3]);
void entryMove(char board[3][3]);
void computer (char board[3][3]);
int winner (char board[3][3]);

void game(char board[3][3])
{
    int counter1=0, counter2;

    enterMove(board);

    do
    {
        system ("clear");
        boardBody(board);

        if (counter1 % 2 == 0)
        {
            entryMove(board);
        }
        else
        {
            computer(board);
        }

        counter2 = winner(board);
        
        counter1++;
        
    } while (counter1 <= 9 && counter2 == 3);

    system ("clear");
    boardBody(board);

    if (counter2 < 2)
    {
        cout << endl << ",◦⁺˚*･༓☾ Win ☽༓･*˚⁺◦,"<< endl << endl;
    }
    else if (counter2 > 1)
    {
        cout << endl << ",◦⁺˚*･༓☾ Lose ☽༓･*˚⁺◦,"<< endl << endl;
    }
    else
    {
        cout << endl << ",◦⁺˚*･༓☾ None win ☽༓･*˚⁺◦,"<< endl << endl;
    }
    
    
    
}
```
<br>

In this function, most of the functions are combined in cycle mode to be able to show the board in a specific way and the information of the board necessary to see the game in real time and that this allows us to play.
<br>

```C++
void enterMove(char board[3][3])
{
    int counter1, counter2;
    char entry;

    entry = '1';

    for (int counter1 = 0; counter1 < 3; counter1++)
    {
        for (int counter2 = 0; counter2 < 3; counter2++)
        {
            board[counter1][counter2] = entry++;
        }
    }
}
```
<br>

This function sorts the numbers in the boxes to show each move as a number.
<br>

```C++
void entryMove(char board[3][3])
{
    int counter1, counter2, counter3;
    char enter;

    do
    {
        do
        {
            cout << endl << "Enter a movement: ";
            cin >> board[3][3];
            enter = board[3][3];
        } while (enter < '1' || enter > '9');

        counter3 = 0;

        switch (enter)
        {
        case '1':
        {
            counter1 = 0;
            counter2 = 0;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '2':
        {
            counter1 = 0;
            counter2 = 1;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '3':
        {
            counter1 = 0;
            counter2 = 2;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '4':
        {
            counter1 = 1;
            counter2 = 0;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '5':
        {
            counter1 = 1;
            counter2 = 1;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '6':
        {
            counter1 = 1;
            counter2 = 2;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '7':
        {
            counter1 = 2;
            counter2 = 0;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '8':
        {
            counter1 = 2;
            counter2 = 1;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '9':
        {
            counter1 = 2;
            counter2 = 2;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        }
    } while (counter3 == 1);

    board[counter1][counter2] = 'X';
}
```
<br>

This function is what allows the player to place an **X** on the desired square and also analyzes if the chosen square is occupied.
<br>

```C++
void computer (char board[3][3]){
    int counter1, counter2, number;
    srand (time(NULL));

    do
    {
        counter1 = rand() % 3;
        counter2 = rand() % 3;
        number = 0;
        if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
        {
            number = 1;
        }
        
    } while (number == 1);

    board[counter1][counter2] = 'O';
}
```
<br>

This function randomly chooses an unoccupied square that will be the move the computer will make.
<br>

```C++
void boardBody(char board[3][3])
{
    int counter1, counter2;

    cout << endl << ",◦⁺˚*･༓☾ Cat game ☽༓･*˚⁺◦," << endl << endl;

    for (int counter1 = 0; counter1 < 3; counter1++)
    {
        cout << "        |     |     " << endl;
        for (int counter2 = 0; counter2 < 3; counter2++)
        {
            if (counter2 == 0)
            {
                cout << "     " << board[counter1][counter2] << "  |";
            }

            else if (counter2 == 1)
            {
                cout << "  " << board[counter1][counter2] << "  |";
            }
            else
            {
                cout << "  " << board[counter1][counter2] << "  ";
            }
        }

        if (counter1 < 2)
        {
            cout << endl
                 << "   _____|_____|_____" << endl;
        }
        else
        {
            cout << endl
                 << "        |     |     "<< endl;
        }
    }
}
```
<br>

This function is responsible for shaping the game by printing the title and the board.
<br>

```C++
int winner (char board[3][3]){
    if (board[0][0] == 'X' || board[0][0] == 'O')
    {
        if (board[0][0] == board[0][1] && board[0][0] == board[0][2])
        {
            if (board[0][0] == 'X')
            {
                return 1;
            }
            else if (board[0][0] == 'O')
            {
                return 2;
            }
            
        }
        else if (board[0][0] == board[1][0] && board[0][0] == board[2][0])
        {
            if (board[0][0] == 'X')
            {
                return 1;
            }
            else if (board[0][0] == 'O')
            {
                return 2;
            }
        }

    }
    else if (board[1][1] == 'X' || board[1][1] == 'O')
    {
        if (board[1][1] == board[0][1] && board[1][1] == board[2][2])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
            
        }
        else if (board[1][1] == board[0][1] && board[1][1] == board[2][1])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
        }
        else if (board[1][1] == board[1][0] && board[1][1] == board[1][2])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
        }
        else if (board[1][1] == board[0][2] && board[1][1] == board[2][0])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
        }
        
    }
    else if (board[2][2] == 'X' || board[2][2] == 'O')
    {
        if (board[2][2] == board[2][0] && board[2][2] == board[2][1])
        {
            if (board[2][2] == 'X')
            {
                return 1;
            }
            else if (board[2][2] == 'O')
            {
                return 2;
            }
            
        }
        else if (board[2][2] == board[0][2] && board[2][2] == board[1][2])
        {
            if (board[2][2] == 'X')
            {
                return 1;
            }
            else if (board[2][2] == 'O')
            {
                return 2;
            }
        }

    }

    return 3;
    
}
```
<br>

This function refuses to analyze all possible cases where the user or the computer can win and depending on an **X** or **O** in a specific box, it checks the following boxes and evaluates if there is a case . winner.
<br>

```C++
int main()
{
    char board[3][3];

    game(board);

    return 0;
}
```
<br>

Finally, the main function simply creates the array and starts the **game** function which calls all the other functions and thus starts the game, the last one just returns a 0 to finish the program successfully.
<br>

#
### 4. Conclusion.
This program represented a challenge as it required not only the use of everything learned during the semester, but also the creativity to put together each tool that we had at our disposal and thus create a much more complex program that not only printed specific data, but also data that was changing progressively and that affected internally, so a constant review was necessary to detect when the program ended.<br>
The benefits obtained by carrying out this practice were finding new and/or better ways of scheduling tasks and, as limitations, the compatibility that one function could have with another.