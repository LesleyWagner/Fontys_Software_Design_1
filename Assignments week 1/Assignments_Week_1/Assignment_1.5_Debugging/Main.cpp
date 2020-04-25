#include <iostream>;

using namespace std;

int main() {
	int x = 2;
	int y = 5; 
	int z = 6; 

	cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
	// output: x = 2, y = 5, z = 6
	cout << "x + y = " << x + y << '\n';
	// output: x + y = 7
	cout << "Sum of " << x << " and " << z << " is " << x + z << '\n';
	// output: Sum of 2 and 6 is 8
	cout << "y / x = " << y / x << '\n';
	// output: y / x = 2
	cout << "2 times " << x << " = " << 2 * x << '\n';
	// output: 2 times 2 = 4
}