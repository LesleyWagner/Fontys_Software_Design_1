#include <iostream>

using namespace std;

int main(void) {
	int num1, num2;
	char numOperator;
	double result;
	bool valid = true; // operator is valid?

	cout << "Provide first number: ";
	cin >> num1;

	cout << "Provide second number: ";
	cin >> num2;

	cout << "Provide the operator (+,-,*,/): ";
	cin >> numOperator;

	switch (numOperator) {
	case '+':
		result = num1 + (double)num2;
		break;
	case '-':
		result = num1 - (double)num2;
		break;
	case '*':
		result = num1 * (double)num2;
		break;
	case '/':
		result = num1 / (double)num2;
		break;
	default:
		valid = false;
	}

	if (valid) {
		cout << "Result: " << num1 << numOperator << num2 << " = " << result;
	}
	else {
		cout << "The arithmetic operator is not a valid one.";
	}

	return 0;
}