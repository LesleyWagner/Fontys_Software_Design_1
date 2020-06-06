#include <iostream>

using namespace std;

int main(void) {
	double weight; // kg
	double height; // m
	double bmi;

	cout << "Let me calculate your bmi.\n";
	cout << "What is your weight in kg: ";
	cin >> weight;
	cout << "What is your height in meters: ";
	cin >> height;

	bmi = weight / (height*height);

	cout << "Your BMI: " << bmi << endl;
	if (bmi >= 30) {
		cout << "Your BMI is extremely high. " << 
			"Please contact your doctor because your health is in danger!" << endl;
	}
	cout << "(Underweight: less than 18.5\n" <<
		"Normal: between 18.5 and 24.9\n" <<
		"Overweight: between 25 and 29.9\n" <<
		"Obese: 30 or greater)\n";

	return 0;
}