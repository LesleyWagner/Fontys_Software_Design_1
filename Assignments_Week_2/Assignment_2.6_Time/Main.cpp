#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string firstTime; 
	string secondTime;
	int firstHours, firstMinutes;
	int secondHours, secondMinutes;
	int hoursBetween, minutesBetween;

	cout << "Please enter the first time: ";
	cin >> firstTime;
	cout << "Please enter the second time: ";
	cin >> secondTime;

	// convert strings to integer hours and minutes
	firstHours = stoi(firstTime.substr(0, 2));
	firstMinutes = stoi(firstTime.substr(2, 2));
	secondHours = stoi(secondTime.substr(0, 2));
	secondMinutes = stoi(secondTime.substr(2, 2));

	firstMinutes += firstHours * 60; // first time in minutes
	secondMinutes += secondHours * 60; // second time in minutes

	// if second time is earlier than first time, 
	// add 24 hours (1440 minutes) to second time because 
	// the second time is on the next day
	if (firstMinutes > secondMinutes) {
		secondMinutes += 1440;
	}

	minutesBetween = secondMinutes - firstMinutes;
	hoursBetween = minutesBetween / 60;
	minutesBetween = minutesBetween % 60;

	cout << hoursBetween << " hours " << minutesBetween << " minutes" << endl;
}