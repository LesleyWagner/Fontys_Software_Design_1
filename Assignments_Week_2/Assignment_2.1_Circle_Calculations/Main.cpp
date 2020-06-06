#include <iostream>
using namespace std;

int main(void) {
	int radius;
	int diameter;
	double circumference;
	double area;
	const double pi = 3.14159;

	cout << "Enter radius of a circle as integer: ";
	cin >> radius;

	diameter = 2 * radius;
	circumference = pi * diameter;
	area = pi * radius * radius;

	cout << "Diameter: " << diameter << endl;
	cout << "Circumference: " << circumference << endl;
	cout << "Area: " << area << endl;
}