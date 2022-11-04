/*
Date: 10/28/2022
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: 
Last Modification: 
*/

#include<iostream>

using namespace std;

int play, row, col;

char playArea[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
}

void board(int);

int selectPlay()
{
    do
    {
        cout << "Select the move: ";
        cin >> play;
    } while (play <= 9 && play > 0);
    return play;
}

bool checkPlay(int play)
{
    if (play == 1)
    {
        row = 0;
        col = 2;
    }
    else if (play == 2)
    {
        row = 0;
        col = 6;
    }
    else if (play == 3)
    {
        row = 0;
        col = 10;
    }
    else if (play == 4)
    {
        row = 4;
        col = 2;
    }
    else if (play == 5)
    {
        row = 4;
        col = 6;
    }
    else if (play == 6)
    {
        row = 4;
        col = 10;
    }
    else if (play == 7)
    {
        row = 7;
        col = 2;
    }
    else if (play == 8)
    {
        row = 7;
        col = 6;
    }
    else if (play == 9)
    {
        row = 7;
        col = 10;
    }
    if (playArea[row][col] == 'x' || playArea[row][col] == 'o')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    void board(int)
    {
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                if (row == 1 || row == 3)
                {
                    cout << "-";
                }
                else
                {
                    cout << " ";
                }
                if (col == 2 || col == 5)
                {
                    cout << "|";
                }
            }
            cout << "\n";
        }
    }

    do
    {
        bool invalidMove=true;
        play=selectPlay();
        invalidMove=checkPlay(play);
        if (invalidMove==true)
        {
            cout << "Try again.";
        }
    } while (invalidMove==true);
   
   return 0;
}