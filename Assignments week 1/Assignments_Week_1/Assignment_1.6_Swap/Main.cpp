#include <iostream>;

using namespace std;

int main() {
	int x = 0;
	int y = 0;
	int a = 0;

	cout << "Enter a value for x: ";
	cin >> x;
	cout << "Enter a value for y: ";
	cin >> y;

	a = x;
	x = y;
	y = a;

	cout << "At the end: x = " << x << " and y = " << y << endl;
}