#include <iostream>
#include <string>

using namespace std;

struct PlyrInf{

	char plyrNm[20];
	char plyrId;
}ctvPlyr, playerOne, playerTwo;

int plyrDrp(char brd[][10], PlyrInf ctvPlyr);
void chckBllw(char brd[][10], PlyrInf ctvPlyr, int drpChc);
void dsplBrd(char brd[][10]);
int chckFr(char brd[][10], PlyrInf ctvPlyr);
int fllBrd(char brd[][10]);
void plyrWn(PlyrInf ctvPlyr);
int rstrt(char brd[][10]);

int plyrDrp(char brd[][10], PlyrInf ctvPlyr){
	int drpChc;
	do
	{
		cout << ctvPlyr.plyrNm << "'s Trn ";
		cout << "Please enter a number between 1 and 7: ";
		cin >> drpChc;

		while (brd[1][drpChc] == 'X' || brd[1][drpChc] == 'O')
		{
			cout << "That row is full, please enter a new row: ";
			cin >> drpChc;
		}

	}
    
    while (drpChc < 1 || drpChc > 7);

return drpChc;
}

void chckBllw(char brd[][10], PlyrInf ctvPlyr, int drpChc){
	int lngth = 6;
	int trn = 0;

	do 
	{
		if (brd[lngth][drpChc] != 'X' && brd[lngth][drpChc] != 'O')
		{
			brd[lngth][drpChc] = ctvPlyr.plyrId;
			trn = 1;
		}
		else
		--lngth;
	}
    
    while (trn != 1);


}

void dsplBrd(char brd[][10]){
	int row = 6, col = 7, i, ix;
	
	for(i = 1; i <= row; i++)
	{
		cout << "|";
		for(ix = 1; ix <= col; ix++)
		{
			if(brd[i][ix] != 'X' && brd[i][ix] != 'O')
				brd[i][ix] = '*';

			cout << brd[i][ix];
			
		}

		cout << "|" << endl;
	}

}

int chckFr(char brd[][10], PlyrInf ctvPlyr){
	char XO;
	int win;
	
	XO = ctvPlyr.plyrId;
	win = 0;

	for(int i = 8; i >= 1; --i)
	{
		
		for(int ix = 9; ix >= 1; --ix)
		{
			
			if(brd[i][ix] == XO     &&
				brd[i-1][ix-1] == XO &&
				brd[i-2][ix-2] == XO &&
				brd[i-3][ix-3] == XO)
			{
				win = 1;
			}
			

			if(brd[i][ix] == XO   &&
				brd[i][ix-1] == XO &&
				brd[i][ix-2] == XO &&
				brd[i][ix-3] == XO)
			{
				win = 1;
			}
					
			if(brd[i][ix] == XO   &&
				brd[i-1][ix] == XO &&
				brd[i-2][ix] == XO &&
				brd[i-3][ix] == XO)
			{	
				win = 1;
			}
					
			if(brd[i][ix] == XO     &&
				brd[i-1][ix+1] == XO &&
				brd[i-2][ix+2] == XO &&
				brd[i-3][ix+3] == XO)
			{
				win = 1;
			}
						
			if (brd[i][ix] == XO   &&
				 brd[i][ix+1] == XO &&
				 brd[i][ix+2] == XO &&
				 brd[i][ix+3] == XO)
			{
				win = 1;
			}
		}
		
	}

return win;
}

int fllBrd(char brd[][10]){
	int full;
	full = 0;
	for (int i = 1; i <= 7; ++i)
	{
		if (brd[1][i] != '*')
			++full;
	}

return full;
}

void plyrWn(PlyrInf ctvPlyr){
	cout << endl << ctvPlyr.plyrNm << " Connected Four, You Win!" << endl;
}

int rstrt(char brd[][10]){
	int rstrt;

	cout << "Would you like to rstrt? Yes(1) No(2): ";
	cin >> rstrt;
	if (rstrt == 1)
	{
		for(int i = 1; i <= 6; i++)
		{
			for(int ix = 1; ix <= 7; ix++)
			{
				brd[i][ix] = '*';
			}
		}
	}
	else
		cout << "Goodbye!" << endl;
return rstrt;
}

int main(){
	PlyrInf playerOne, playerTwo;
	char brd[9][10]; 
	int trueWidth = 7; 
	int trueLngth = 6; 
	int drpChc, win, full, again;

	cout << "Let's Play Connect 4" << endl << endl;
	cout << "Player One please enter your name: ";
	cin >> playerOne.plyrNm;
	playerOne.plyrId = 'X';
	cout << "Player Two please enter your name: ";
	cin >> playerTwo.plyrNm;
	playerTwo.plyrId = 'O';
	
	full = 0;
	win = 0;
	again = 0;
	dsplBrd(brd);
	do
	{
		drpChc = plyrDrp(brd, playerOne);
		chckBllw(brd, playerOne, drpChc);
		dsplBrd(brd);
		win = chckFr(brd, playerOne);
		if (win == 1)
		{
			plyrWn(playerOne);
			again = rstrt(brd);
			if (again == 2)
			{
				break;
			}
		}

		drpChc = plyrDrp(brd, playerTwo);
		chckBllw(brd, playerTwo, drpChc);
		dsplBrd(brd);
		win = chckFr(brd, playerTwo);
		if (win == 1)
		{
			plyrWn(playerTwo);
			again = rstrt(brd);
			if (again == 2)
			{
				break;
			}
		}
		full = fllBrd(brd);
		if (full == 7)
		{
			cout << "The brd is full, it is a draw!" << endl;
			again = rstrt(brd);
		}

	}
    
    while (again != 2);

	

return 0;
}