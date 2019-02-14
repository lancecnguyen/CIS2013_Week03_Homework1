#include <iostream>
using namespace std;


int main(){
	
	char u1;
	char u2;
	char again = 'Y';
	
	cout << "Rock Paper Scissor game" << endl;

	
	do{
			cout << "Player 1 enter your choice of [R]rock, [P]paper, [S]scissor" << endl;
	cin >> u1;
	cout << "Player 2 enter your choice of [R]rock, [P]paper, [S]scissor" << endl;
	cin >> u2;
	
		if (u2 == u1)
			cout << "Nobody wins." << endl;
		else

			switch(u1){
				case 'r':
				case 'R':
					if (u2 = 'S' || 's')
						cout << "Rock breaks scissors, User 1 wins." << endl;
					else
						cout << "Paper covers rock, User 2 wins." << endl;
					break;
				case 'p':
				case 'P':
					if (u2 = 'R' || 'r')
						cout << "Paper covers rock, User 1 wins." << endl;
					else
						cout << "Scissors cut paper, User 2 wins." << endl;
					break;
				case 'S':
				case 's':
					if (u2 = 'P' || 'p')
						cout << "Scissors cut paper, User 1 wins." << endl;
					else
						cout << "Rock breaks scissors, User 2 wins." << endl;
					break;
		}				
		cout << endl << "Do you want to play again (Y/n)?";
		cin >> again;
	}while ('n' != again);
	
	
	return 0;
}
