#include <iostream>
#include <stdlib.h>

#define Rs 8
#define Vs 40
#define R0 20

using namespace std;

int main(void) {
	double maxPower = 0;
	double turnsRatio;

	double power;
	for (double n = 0.01; n <= 2; n += 0.01) {
		power = Rs * pow((n * Vs) / (pow(n, 2) * R0 + Rs), 2);

		if (power > maxPower) {
			maxPower = power;
			turnsRatio = n;
		}
	}

	cout << "The maximum power delivered to the speaker is " << 
		maxPower << " Watts, with transformer turns ratio n = " << turnsRatio << endl;
	return 0;
}

/*
* For loop, because the amount of steps is known.
*/