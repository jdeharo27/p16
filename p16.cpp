/*
	Jesus De Haro
	p16.cpp
	2/16/2018
	Description: A fun and simple game of "Rock, Paper, Scissors".
	Algorithm: 1) Get user's choice od rock, paper or scissors.
               2) Generate random RPS choice and compare to user.
               3) Display winner or if tie.
*/

#include <iostream>
#include <time.h>	 // Needed for time(NULL)
#include <stdlib.h>	 // Needed for srand(iseed)
using namespace std;

int main(){
	// Initializing.
	int iseed = time(NULL); // iseed changes based on system time.
	srand(iseed);		// srand generates a list of random numbers.

	// Declared variables.
	int p1;     // Input
	int rock = 1,
        paper = 2,
        scissors = 3;

	int min = 1,
		sizeSet = 3;
	int p2 = rand()%(sizeSet) + min; // Will hold the randomly generated number.

    // Explain rules to user.
    cout << "Enter Rock(1), Paper(2) or Scissors(3) \nPlayer 1: ";
    cin >> p1;
    cout << "Player 2: " << p2 << endl;

    // Check who won!
    if (p1 == p2){
        cout << "It is a tie!\n";
    }
    else if ((p1 == rock) && (p2 == paper)){
        cout << "Player 2 Wins! Paper covers rock!\n";
    }
    else if ((p1 == rock) && (p2 == scissors)){
        cout << "Player 1 Wins! Rock breaks scissors!\n";
    }
    else if ((p1 == paper) && (p2 == rock)){
        cout << "Player 1 Wins! Paper covers rock!\n";
    }
    else if ((p1 == paper) && (p2 == scissors)){
        cout << "Player 2 Wins! Scissors cuts paper!\n";
    }
    else if ((p1 == scissors) && (p2 == rock)){
        cout << "Player 2 Wins! Rock breaks scissors!\n";
    }
    else if ((p1 == scissors) && (p2 == paper)){
        cout << "Player 1 Wins! Scissors cuts paper!\n";
    }

	return 0;
}
/* Test Runs.
Enter Rock(1), Paper(2) or Scissors(3)
Player 1: 3
Player 2: 2
Player 1 Wins! Scissors cuts paper!
--------------------------------------
Enter Rock(1), Paper(2) or Scissors(3)
Player 1: 1
Player 2: 3
Player 1 Wins! Rock breaks scissors!
--------------------------------------
Enter Rock(1), Paper(2) or Scissors(3)
Player 1: 1
Player 2: 1
It is a tie!
*/
