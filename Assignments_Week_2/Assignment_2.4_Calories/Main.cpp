#include <iostream>
using namespace std;

int main(void) {
	const int burritoCals = 357;
	const int saladCals = 185;
	const int milkshakeCals = 388;
	const double calsPerMile = 100;

	int burritos;
	int saladBowls;
	int milkshakes;
	int totalCals;
	double miles;

	cout << "How many bean burritos, bowls of salad, and milkshakes did you consume?\n";
	cin >> burritos >> saladBowls >> milkshakes;

	totalCals = burritos * burritoCals + saladBowls * saladCals + milkshakes * milkshakeCals;
	miles = totalCals / calsPerMile;

	cout << "You ingested " << totalCals << " calories." << endl;
	cout << "You will have to run " << miles << " miles to expend that much energy." << endl;
}