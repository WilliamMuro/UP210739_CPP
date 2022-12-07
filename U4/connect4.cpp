#include <iostream>
#include <thread>
using namespace std;

struct playerInfo
{
    char playerName[81];
    char playerID;
};

int PlayerDrop(char board[][10], playerInfo activePlayer);
void CheckBellow(char board[][10], playerInfo activePlayer, int dropChoice);
void DisplayBoard(char board[][10]);
int CheckFour(char board[][10], playerInfo activePlayer);
int FullBoard(char board[][10]);
void PlayerWin(playerInfo activePlayer);
int restart(char board[][10]);
void dibujarEncabezado(char board [][10]);
void gotoxy(int x,int y);
void Mensage();

int main()
{
    playerInfo playerOne, playerTwo;
    char board[9][10];
    int trueWidth = 7;
    int trueLength = 6;
    int dropChoice, win, full, again;

    system("clear");
    
    Mensage ();
    
    gotoxy(40,13);
    cout << "Player One please enter your name: ";
    cin >> playerOne.playerName;
    playerOne.playerID = 'X';
    gotoxy(40,15);
    cout << "Player Two please enter your name: ";
    cin >> playerTwo.playerName;
    playerTwo.playerID = 'O';
    system("clear");
    
    full = 0;
    win = 0;
    again = 0;
    Mensage ();
    dibujarEncabezado(board);
    DisplayBoard(board);
    
    do
    {
        dropChoice = PlayerDrop(board, playerOne);
        CheckBellow(board, playerOne, dropChoice);
        dibujarEncabezado(board);
        DisplayBoard(board);
        win = CheckFour(board, playerOne);
        if (win == 1)
        {
            PlayerWin(playerOne);
            again = restart(board);
            if (again == 2)
            {
                break;
            }
        }
        dropChoice = PlayerDrop(board, playerTwo);
        CheckBellow(board, playerTwo, dropChoice);
        dibujarEncabezado(board);
        DisplayBoard(board);
        
        win = CheckFour(board, playerTwo);
        if (win == 1)
        {
            PlayerWin(playerTwo);
            again = restart(board);
            if (again == 2)
            {
                break;
            }
        }
        full = FullBoard(board);
        if (full == 7)
        {
            gotoxy(45,16);
            cout << "The board is full, it is a draw!" << endl;
            again = restart(board);
        }
    } while (again != 2);

    return 0;
}

int PlayerDrop(char board[][10], playerInfo activePlayer)
{
    int dropChoice;
    do
    {
        cout << "\n";
        gotoxy(45,13);
        cout << activePlayer.playerName << "'s Turn ";
        gotoxy(45,14);
        cout << "Please enter a number between 1 and 7: ";
        cin >> dropChoice;
        
        while (board[1][dropChoice] == 'X' || board[1][dropChoice] == 'O')
        {
            gotoxy(45,16);
            cout << "That row is full, please enter a new row: ";
            cin >> dropChoice;
        }
        system("clear");
        
        Mensage();
    } while (dropChoice < 1 || dropChoice > 7);
    
    return dropChoice;
}

void CheckBellow(char board[][10], playerInfo activePlayer, int dropChoice)
{
    int length, turn;
    length = 6;
    turn = 0;

    do
    {
        if (board[length][dropChoice] != 'X' && board[length][dropChoice] != 'O')
        {
            board[length][dropChoice] = activePlayer.playerID;
            turn = 1;
        }
        else
            --length;
    } while (turn != 1);
}

void dibujarEncabezado (char board[][10]){
    cout << endl;
    int rows = 6 , columns = 7, i, ix;

    for ( i = 0; i < columns; ++i) {
        
        cout << "|", i +1;
        cout << "  " << i +1 << "  ";
        if (i+1 >= columns)
        {
            cout<< "|";
        }
        
    }
    cout << endl;
}

void DisplayBoard(char board[][10])
{
    int rows = 6, columns = 7, i, ix;

    for (i = 1; i <= rows; i++)
    {
        cout << "|";
        for (ix = 1; ix <= columns; ix++)
        {
            cout << "  ";
            if (board[i][ix] != 'X' && board[i][ix] != 'O')
                board[i][ix] = '*';
            cout << board[i][ix];
            cout << "  |";
        }
        cout << "" << endl;
    }
}

int CheckFour(char board[][10], playerInfo activePlayer)
{
    char XO;
    int win;

    XO = activePlayer.playerID;
    win = 0;

    for (int i = 8; i >= 1; --i)
    {

        for (int ix = 9; ix >= 1; --ix)
        {

            if (board[i][ix] == XO &&
                board[i - 1][ix - 1] == XO &&
                board[i - 2][ix - 2] == XO &&
                board[i - 3][ix - 3] == XO)
            {
                win = 1;
            }

            if (board[i][ix] == XO &&
                board[i][ix - 1] == XO &&
                board[i][ix - 2] == XO &&
                board[i][ix - 3] == XO)
            {
                win = 1;
            }

            if (board[i][ix] == XO &&
                board[i - 1][ix] == XO &&
                board[i - 2][ix] == XO &&
                board[i - 3][ix] == XO)
            {
                win = 1;
            }

            if (board[i][ix] == XO &&
                board[i - 1][ix + 1] == XO &&
                board[i - 2][ix + 2] == XO &&
                board[i - 3][ix + 3] == XO)
            {
                win = 1;
            }

            if (board[i][ix] == XO &&
                board[i][ix + 1] == XO &&
                board[i][ix + 2] == XO &&
                board[i][ix + 3] == XO)
            {
                win = 1;
            }
        }
    }

    return win;
}

int FullBoard(char board[][10])
{
    int full;
    full = 0;
    for (int i = 1; i <= 7; ++i)
    {
        if (board[1][i] != '*')
            ++full;
    }

    return full;
}

void PlayerWin(playerInfo activePlayer)
{
    cout << endl
         << activePlayer.playerName << " Connected Four, You Win!" << endl;
}

int restart(char board[][10])
{
    int restart;

    cout << "Would you like to restart? Yes(1) No(2): ";
    cin >> restart;
    if (restart == 1)
    {
        for (int i = 1; i <= 6; i++)
        {
            for (int ix = 1; ix <= 7; ix++)
            {
                board[i][ix] = '*';
            }
        }
    }
    else{
        cout <<endl;
        cout << "Goodbye!" << endl;
    }
    return restart;
    system("clear");
}

void gotoxy(int x,int y){
    cout<< "\033["<< y << ";" << x << "f" ;
}


void Mensage()
{
    cout << "  " <<endl;
    cout << "  " <<endl;
    cout << "  " <<endl;
	cout << "     █████╗   █████╗  ███╗  ██╗ ███╗  ██╗ ███████╗  █████╗  ████████╗     ██╗██╗ " <<endl;
	cout << "    ██╔══██╗ ██╔══██╗ ████╗ ██║ ████╗ ██║ ██╔════╝ ██╔══██╗ ╚══██╔══╝    ██╔╝██║ " <<endl;
	cout << "    ██║  ╚═╝ ██║  ██║ ██╔██╗██║ ██╔██╗██║ █████╗   ██║  ╚═╝    ██║      ██╔╝ ██║ " <<endl;
	cout << "    ██║  ██╗ ██║  ██║ ██║╚████║ ██║╚████║ ██╔══╝   ██║  ██╗    ██║      ███████║ " <<endl;
	cout << "    ╚█████╔╝ ╚█████╔╝ ██║ ╚███║ ██║ ╚███║ ███████╗ ╚█████╔╝    ██║      ╚════██║ " <<endl;
	cout << "     ╚════╝   ╚════╝  ╚═╝  ╚══╝ ╚═╝  ╚══╝ ╚══════╝  ╚════╝     ╚═╝           ╚═╝ " <<endl;
    cout << "  " <<endl;
    cout << "  " <<endl;         
}