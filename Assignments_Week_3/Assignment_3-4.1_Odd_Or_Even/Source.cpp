#include <iostream>

using namespace std;

int main(void) {
	int number;
	cout << "Please give an integer number: ";
	cin >> number;

	if ((number % 2) == 0) { // number is even
		cout << "Number is even." << endl;
	}
	else {
		cout << "Number is odd." << endl;
	}
}