#include <iostream>

using namespace std;

int main(void) {
	unsigned int number;

	cout << "Please give a number to create a hailstone sequence: ";
	cin >> number;

	do {
		cout << number;
		if (number % 2) {			
			number = number * 3 + 1;
			cout << " is odd, so multiply by 3 and add 1 to get " << number << endl;
		}
		else {
			number /= 2;
			cout << " is even, so divide by 2 to get " << number << endl;
		}
	} while (number != 1);

	return 0;
}