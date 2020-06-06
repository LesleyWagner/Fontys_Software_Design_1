#include <iostream>

using namespace std;

int main(void) {
	int month;
	int days = 0;

	cout << "This program determines days of a month;\n";
	cout << "Give me a month (1-12): ";
	cin >> month;

	while (month < 1 || month > 12) {
		cout << "Bad input for month. Try again.\n";
		cout << "Give me a month (1-12): ";
		cin >> month;
	}

	if (month == 2) {
		cout << "28 or 29 days";
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12) {
		days = 31;
		cout << days << " days";
	}
	else {
		days = 30;
		cout << days << " days";
	}

	

	return 0;
}