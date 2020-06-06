#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;

	cout << "Please enter three integer numbers." << endl;
	
	cout << "Number 1: ";
	cin >> a;

	cout << "Number 2: ";
	cin >> b;

	cout << "Number 3: ";
	cin >> c;

	if ((a == b) || (a == c) || (b == c)) {
		cout << "Duplicates." << endl;
	}
	else {
		cout << "All unique." << endl;
	}
}