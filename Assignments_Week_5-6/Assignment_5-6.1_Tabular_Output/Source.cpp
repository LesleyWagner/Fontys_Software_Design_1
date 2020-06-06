#include <iostream>

using namespace std;

int main(void) {
	unsigned int N;

	cout << "Give me a positive integer: ";
	cin >> N;

	cout << "N\tN*N\tN*N*N\tN*N*N*N" << endl;

	for (int i = 1; i <= N; i++) {
		cout << i << "\t" << i * i << "\t" << i * i * i << "\t" << 
			i * i * i * i << endl;
	}
	return 0;
}

/*
* question a: The program uses a for-loop, 
* because the amount of times it has to go into the loop is known (provided by the user).
*/