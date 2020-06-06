#include <iostream>

using namespace std;

int main(void) {
	unsigned int N;
	unsigned int sum = 0;

	cout << "Enter a number > 10: ";
	cin >> N;
	while (N < 11) {
		cout << "Your number is not greater than 10. Try again." << endl;
		cout << "Enter a number > 10: ";
		cin >> N;
	}

	for (int i = 1; i <= N; i++) {
		cout << sum << " + " << i << " = ";
		sum += i;
		cout << sum << endl;
	}

	cout << "The total sum is " << sum << "." << endl;

	return 0;
}