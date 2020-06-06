#include <iostream>

using namespace std;

int main(void) {
	unsigned int N;
	unsigned int sum = 1;
	unsigned int result = 1;

	cout << "Enter an integer > 15: ";
	cin >> N;
	while (N < 16) {
		cout << "Your number is not greater than 15. Try again." << endl;
		cout << "Enter an integer > 15: ";
		cin >> N;
	}

	while (sum < N) {			
		result += 1;
		sum += result;
	}

	cout << "1 + 2 + 3 + ... + " << result - 1 << " = " << sum - result<< endl;
	cout << sum - result << " is less than " << N << endl;
	cout << "1 + 2 + 3 + ... + " << result << " = " << sum << endl;
	cout << sum << " is greater than or equal to " << N << endl;
	cout << "So, the result is: " << result - 1 << endl;

	return 0;
}


/*
* question a: The program uses a while-loop,
* because the amount of times it has to go into the loop is not known.
*/