#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;
	int max = 0;

	cout << "Please give three integer numbers to compare." << endl;
	
	cout << "Number 1: ";
	cin >> a;

	cout << "Number 2: ";
	cin >> b;

	cout << "Number 3: ";
	cin >> c;

	if (a == b == c) {
		cout << "All numbers are equal." << endl;
	}
	else {
		if (a > b) {
			if (a > c) {
				max = a;
			}
			else {
				max = c;
			}
		}
		else {
			if (b > c) {
				max = b;
			}
			else {
				max = c;
			}
		}

		cout << "The maximum value is " << max << endl;
	}
}