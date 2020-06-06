#include <iostream>
#include <string>
using namespace std;

int main(void) {
	double SD11;
	double SD12;
	double SD21;
	double SD22;
	double totalEC;

	string intro =
		"This program calculates the total earned EC's for SD courses for one student.\n"
		"There are four SD courses in the first year: SD11, SD12, SD21 and SD22.\n"
		"For each of them a student can earn either:\n"
		"\t 1.5 EC's (passed the exam) or\n"
		"\t 0 EC's (failed the exam).\n";

	cout << intro;
	cout << "Please, enter the EC's for SD11: ";
	cin >> SD11;
	cout << "Please, enter the EC's for SD12: ";
	cin >> SD12;
	cout << "Please, enter the EC's for SD21: ";
	cin >> SD21;
	cout << "Please, enter the EC's for SD22: ";
	cin >> SD22;

	totalEC = SD11 + SD12 + SD21 + SD22;

	cout << "Based on the earned EC's for SD11 (" << SD11 << "), SD12 (" << SD12 <<
		"), SD21 (" << SD21 << ") and SD22 (" << SD22 << ")," << endl <<
		"the total number of EC's for the SD courses is " << totalEC << "!\n";
}