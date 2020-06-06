#include <iostream>
#include <cstdlib>
#define tries 5

using namespace std;

int main(void) {
	const int randomNum = 8; // random number
	int guess;
	int diff;

	cout << "Guess a number between 0 and 99 inclusive: ";
	cin >> guess;
	diff = abs(randomNum - guess);

	int i = 1;
	while (diff != 0 && i < tries) {
		if (diff >= 50) {
			if (guess < randomNum) {
				cout << "Much, much higher!" << endl;
			}
			else {
				cout << "Much, much lower!" << endl;
			}
		}
		else if (diff >= 30) {
			if (guess < randomNum) {
				cout << "Much higher!" << endl;
			}
			else {
				cout << "Much lower!" << endl;
			}
		}
		else if (diff >= 10) {
			if (guess < randomNum) {
				cout << "Higher!" << endl;
			}
			else {
				cout << "Lower!" << endl;
			}
		}
		else {
			if (guess < randomNum) {
				cout << "Slightly higher!" << endl;
			}
			else {
				cout << "Slightly lower!" << endl;
			}
		}
		cout << "Guess a number between 0 and 99 inclusive: ";
		cin >> guess;
		diff = abs(randomNum - guess);
		i++;
	}

	if (diff == 0) {
		cout << "You guessed the correct number." << endl;		
	}
	else {
		cout << "You have reached the maximum of 5 tries." << endl;
		cout << "You failed to guess the correct number." << endl;
	}

	return 0;
}

/*
* question a: while loop, because the amount of loops is not known
*/