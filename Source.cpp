#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
char all_c(char c);
char all_d(char d);
char rando(char opponent);
char tit_for_tat(char opponentsLastMove);void update_score(char p1_move, char p2_move, int& p1_score  , int& p2_score );

int main() {
	char input, choice;
	char you, opponent ='c';
	bool more = true;
	int p1score = 0, p2score = 0;
	srand(time(NULL));

	cout << "Seelct a program" << endl;
	cout << "press c for all c" << endl;
	cout << "press d for all d" << endl;
	cout << "press t for tit for tat" << endl;
	cin >> choice;

	switch (choice) {
	  case 'c':
	    opponent = all_c('c');
		break;

	

	case 'd':
		opponent = all_d('d');
		break;

	case 't':
		opponent = tit_for_tat('c');
		break;

	case 'r':
		opponent = rando(rand() % 2 + 99);
		break;
	}

	cout << "Please enter a move:";
	cin >> you;
	if (you != 'c' && you != 'd')
	{
		cout << "Invalid! Please enter a move:";
		cin >> you;
	}



	update_score(you,opponent,p1score,p2score);
	cout << "You:" << you << "      opponent:" << opponent << endl;

	if (choice == 't')
	{
		opponent = tit_for_tat(you);
	}

	cout << "Do you want to continue? " << endl;
	cout << "type y for yes" << endl;
	cout << "type n for no" << endl;
	cin >> input;
	if (input == 'n') {

		cout << "Your score is " << p1score << " and your opponent's score is " << p2score;
		return 0;
	}

	while (more == true) {
		opponent = rando(rand() % 2 + 99);

		cout << "enter a move:";
		cin >> you;
		if (you != 'c' && you != 'd')
		{
			cout << "Invalid! Please enter a move:";
			cin >> you;
		}		
		

		update_score(you, opponent, p1score, p2score);

		cout << "You:" << you << "      opponent:" << opponent << endl;
		if (choice == 't')
		{
			opponent = tit_for_tat(you);
		}

		cout << "Do you want to continue? " << endl;
		cout << "type y for yes" << endl;
		cout << "type n for no" << endl;
		cin >> input;
		if (input == 'n') {
			more = false;
		}
	}

	cout << "Your score is " << p1score << " and your opponent's score is " << p2score;
	return 0;

}






void swap(char a, char b) {
	char temp;
	temp = a;
	a = b;
	b = temp;
}


char all_c(char c)
{
	return c;
}


char all_d(char d)
{
	return d;
}


char tit_for_tat(char opponentsLastMove) {
	
	




	return opponentsLastMove;
}



void update_score(char p1_move, char p2_move, int& p1_score, int& p2_score) {
	if (p1_move == 'c' && p2_move == 'c')
	{
		p1_score += 3;
		p2_score += 3;
	}

	else if (p1_move == 'c' && p2_move == 'd')
	{
		p1_score += 0;
		p2_score += 5;
	}

	else if (p1_move == 'd' && p2_move == 'c')
	{
		p1_score += 5;
		p2_score += 0;
	}



	else if (p1_move == 'd' && p2_move == 'd')
	{
		p1_score += 1;
		p2_score += 1;
	}


}


char rando(char c) {
	return c;
}
