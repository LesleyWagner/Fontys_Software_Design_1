#include <iostream>

using namespace std;

// simulate preys and predators populations
int main(void) {
	double A; // rate at which prey birth exceeds natural death
	double B; // rate of predation
	double C; // rate at which predator deaths exceed births without food
	double D; // predator increase in the presence of food
	unsigned int preys, predators; // population sizes for preys and predators
	unsigned int periods; // number of periods the simulation runs for

	cout << "This program simulates population sizes of preys and predators." << endl;
	cout << "Please give some parameters." << endl;
	cout << "Rate at which prey birth exceeds natural death: ";
	cin >> A;
	cout << "Rate of predation: ";
	cin >> B;
	cout << "Rate at which predator death exceed births without food: ";
	cin >> C;
	cout << "Predator increase in the presence of food: ";
	cin >> D;
	cout << "Initial population size of preys (positive integer): ";
	cin >> preys;
	cout << "Initial population size of predators (positive integer): ";
	cin >> predators;
	cout << "Number of periods to run the simulation for: ";
	cin >> periods;

	for (int i = 0; i < periods; i++) {
		unsigned int tempPreys; // new value of preys
		tempPreys = preys * (1 + A - B * predators);
		predators = predators * (1 - C + D * preys);
		preys = tempPreys;
	}

	cout << "Population sizes after " << periods << " periods:" << endl;
	cout << "Preys: " << preys << endl;
	cout << "Predators: " << predators << endl;

	return 0;
}

/*
* question a: for loop, because the number of loops is known
*/