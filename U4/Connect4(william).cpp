#include <iostream>
#include <time.h>

using namespace std;

void game(char board[7][6]);
void enterMove(char board[7][6]);
void boardBody(char board[7][6]);

void game(char board[7][6]){
	enterMove(board);
	boardBody(board);
}

void enterMove(char board[7][6])
{
    int counter1, counter2;
    char entry;

    entry = '*';

    for (int counter1 = 0; counter1 < 6; counter1++)
    {
        for (int counter2 = 0; counter2 < 5; counter2++)
        {
            board[counter1][counter2] = entry;
        }
    }
}

void boardBody(char board[7][6])
{
    int counter1, counter2;

    cout << endl << "Connect 4" << endl << endl << " 1  2  3  4  5  6  7 " << endl;

    for (int counter1 = 0; counter1 < 6; counter1++)
    {
        for (int counter2 = 0; counter2 < 5; counter2++)
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
			else
            {
                cout << " " << board[counter1][counter2] << " ";
            }
        }
    }
}

int main()
{
    char board[7][6];

    game(board);

    return 0;
}

do
{
	/* code */
} while (/* condition */);

if (/* condition */)
{
	/* code */
}
