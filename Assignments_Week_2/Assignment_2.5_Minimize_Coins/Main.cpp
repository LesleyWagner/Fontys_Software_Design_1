#include <iostream>
using namespace std;

int main(void) {
	int euros, eurocents;
	int totalEurocents;

	cout << "Enter euros: ";
	cin >> euros;
	
	cout << "Enter eurocents: ";
	cin >> eurocents;

	totalEurocents = euros*100 + eurocents;

	cout << "2 euro coins: " << totalEurocents / 200 << endl;
	totalEurocents = totalEurocents % 200;
	cout << "1 euro coins: " << totalEurocents / 100 << endl;
	totalEurocents = totalEurocents % 100;
	cout << "50 cent coins: " << totalEurocents / 50 << endl;
	totalEurocents = totalEurocents % 50;
	cout << "20 cent coins: " << totalEurocents / 20 << endl;
	totalEurocents = totalEurocents % 20;
	cout << "10 cent coins: " << totalEurocents / 10 << endl;
	totalEurocents = totalEurocents % 10;
	cout << "5 cent coins: " << totalEurocents / 5 << endl;
	totalEurocents = totalEurocents % 5;
	cout << "2 cent coins: " << totalEurocents / 2 << endl;
	totalEurocents = totalEurocents % 2;
	cout << "1 cent coins: " << totalEurocents / 1 << endl;
	totalEurocents = totalEurocents % 1;
}