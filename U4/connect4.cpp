#include <iostream>
#include <time.h>

using namespace std;

void game(char board[7][7]);
void enterMove(char board[7][7]);
void boardBody(char board[7][7]);
void entryMove(char board[7][7]);

void game(char board[7][7]){
	enterMove(board);
	boardBody(board);
}

void enterMove(char board[7][7])
{
    int counter1, counter2;
    char entry;

    entry = '1';

    for (int counter1 = 0; counter1 < 7; counter1++)
    {
        for (int counter2 = 0; counter2 < 7; counter2++)
        {
            if ((entry == '1')||(entry == '2')||(entry == '3')||(entry == '4')||(entry == '5')||(entry == '6')||(entry == '7'))
            {
                board[counter1][counter2] = entry;
                entry++;
            }
            else if (entry)
            {
                entry = '*';
                board[counter1][counter2] = entry;
            }
        }
    }
}

void entryMove(char board[7][7]){
    
    
}

void boardBody(char board[7][7])
{
    int counter1, counter2;

    cout << endl << "Connect 4" << endl << endl;

    for (int counter1 = 0; counter1 < 7; counter1++)
    {
        cout << endl;
        for (int counter2 = 0; counter2 < 7; counter2++)
        {
            if (counter2 == 0)
            {
                cout << " " << board[counter1][counter2] << " ";
            }

            else if (counter2 == 1)
            {
                cout << " " << board[counter1][counter2] << " ";
            }
            else if (counter2 == 2)
            {
                cout << " " << board[counter1][counter2] << " ";
            }
			else if (counter2 == 3)
            {
                cout << " " << board[counter1][counter2] << " ";
            }
			else if (counter2 == 4)
            {
                cout << " " << board[counter1][counter2] << " ";
            }
			else if (counter2 == 5)
            {
                cout << " " << board[counter1][counter2] << " ";
            }
            else if (counter2 == 6)
            {
                cout << " " << board[counter1][counter2] << " ";
            }
            else
            {
                cout << " " << board[counter1][counter2] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    char board[7][7];

    game(board);

    return 0;
}