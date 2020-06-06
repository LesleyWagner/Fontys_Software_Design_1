#include <iostream>
using namespace std;

int main(void) {
	double x1, y1, x2, y2;
	char leftparen, comma, rightparen;
	double mx, my; // x and y coordinates of midpoint

	cout << "Please enter the first point: ";
	cin >> leftparen >> x1 >> comma >> y1 >> rightparen;
	cout << "Please enter the second point: ";
	cin >> leftparen >> x2 >> comma >> y2 >> rightparen;

	mx = (x1 + x2) / 2;
	my = (y1 + y2) / 2;

	cout << "The midpoint of " << leftparen << x1 << comma << y1 << rightparen <<
		" and " << leftparen << x2 << comma << y2 << rightparen << " is " <<
		leftparen << mx << comma << my << rightparen << endl;
}