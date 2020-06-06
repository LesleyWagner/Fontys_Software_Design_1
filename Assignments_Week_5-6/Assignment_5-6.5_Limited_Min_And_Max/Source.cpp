#include <iostream>

using namespace std;

int main(void) {
	unsigned int min, max;
	int products; 
	unsigned int nAgents = 3;
	unsigned int agent_nr = 1; // agent number
	unsigned int winner = 1; // agent number of the winner
	unsigned int loser = 1; // agent number of the loser

	cout << "This program determines the minimum and maximum sold products from three sales agents." << endl;
	cout << "Enter the amount of sold products for agent nr 1: ";
	cin >> products;

	min = products;
	max = products;
	
	while (products >= 0) {		
		if (products < min) {
			min = products;
			loser = agent_nr;
		}
		else if (products > max) {
			max = products;
			winner = agent_nr;
		}
		agent_nr++;
		cout << "Enter the amount of sold products for agent nr " << agent_nr << ": ";
		cin >> products;
	}

	cout << "Loser with agent number " << loser << " sold " << min << " products." << endl;
	cout << "Winner with agent number " << winner << " sold " << max << " products." << endl;

	return 0;
} 

/*
* question c: The program uses a while-loop,
* because the amount of times it has to go into the loop is not known.
*/