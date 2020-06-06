#include <iostream>
#include <string>

using namespace std;

// get gender input from user
string getGender() {
	string gender;

	cout << "What is your gender (male or female)? ";
	cin >> gender;

	while (gender != "male" && gender != "female") {
		cout << "Bad input for gender. Please input male or female.\n";
		cout << "What is your gender (male or female)? ";
		cin >> gender;
	}

	return gender;
}

double getBfPercentage(string gender) {
	double bodyFat;
	double bfPercentage = 0;

	// calculate body fat for a man
	if (gender == "male") {
		int bodyWeight; // pounds
		int waist; // inches
		double A1;
		double A2;
		double B;
		double bodyFat;

		cout << "Body weight (pounds): ";
		cin >> bodyWeight;
		A1 = bodyWeight * 1.082 + 94.42;

		cout << "Waist measurement at naval (inches): ";
		cin >> waist;
		A2 = waist * 4.15;

		B = A1 - A2;
		bodyFat = bodyWeight - B;
		bfPercentage = bodyFat * 100 / bodyWeight;
	}

	// calculate body fat for a woman
	if (gender == "female") {
		int bodyWeight; // pounds
		int wrist; // inches
		int waist; // inches
		int hip; // inches 
		int forearm; // inches
		double A1;
		double A2;
		double A3;
		double A4;
		double A5;
		double B;

		cout << "Body weight (pounds): ";
		cin >> bodyWeight;
		A1 = bodyWeight * 0.732 + 8.987;

		cout << "Wrist measurement at fullest point (inches): ";
		cin >> wrist;
		A2 = wrist / 3.140;

		cout << "Waist measurement at naval (inches): ";
		cin >> waist;
		A3 = waist * 0.157;

		cout << "Hip measurement at fullest point (inches): ";
		cin >> hip;
		A4 = hip * 0.249;

		cout << "Forearm measurement at fullest point (inches): ";
		cin >> forearm;
		A5 = forearm * 0.434;

		B = A1 + A2 - A3 - A4 + A5;
		bodyFat = bodyWeight - B;
		bfPercentage = bodyFat * 100 / bodyWeight;
	}

	return bfPercentage;
}

int main(void) {
	string gender1; // gender of person 1
	double bfPercentage1; // body fat percentage of person 1
	string gender2; // gender of person 2
	double bfPercentage2; // body fat percentage of person 2

	cout << "This program determines compares the body fat percentage between two people.\n";

	cout << "Person 1:\n";
	gender1 = getGender();
	bfPercentage1 = getBfPercentage(gender1);

	cout << "\nPerson 2:\n";
	gender2 = getGender();
	bfPercentage2 = getBfPercentage(gender2);

	cout << "\nThe body fat percentage of person 1 is " << bfPercentage1 << " %\n";
	cout << "\nThe body fat percentage of person 2 is " << bfPercentage2 << " %\n";
	if (bfPercentage1 == bfPercentage2) {
		cout << "Person 1 and person 2 are equally fat";
	}
	else if (bfPercentage1 > bfPercentage2) {
		cout << "Person 1 is fatter than person 2";
	}
	else {
		cout << "Person 2 is fatter than person 1";
	}

	return 0;
}