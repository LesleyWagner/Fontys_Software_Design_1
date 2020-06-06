#include <iostream>

#define terms 20000 // in fact double the amount of terms

using namespace std;

// approximate pi using Leibniz series
int main(void) {
	double pi = 0; // approximation of number pi

	for (int i = 0; i < terms; i += 2) {	
		if ((i % 4)) {
			pi -= 1.0 / (i + 1);
		}	
		else {
			pi += 1.0 / (i + 1);
		}
	}

	cout << "pi = " << 4 * pi << endl;

	return 0;
}