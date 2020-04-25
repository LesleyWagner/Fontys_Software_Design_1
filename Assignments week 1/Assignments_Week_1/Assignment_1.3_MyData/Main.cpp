#include <iostream>;
#include <string>;

using namespace std;

int main() {
	int age = 0;
	int height = 0; // in cm
	int weight = 0; // in kg

	cout << "Please, provide your age: ";
	cin >> age;

	cout << "Please, provide your height in cm: ";
	cin >> height;

	cout << "Please, provide your weight in kg: ";
	cin >> weight;

	cout << "You are " << age << " years old, you are " << height
		<< " cm tall, and your weight is " << weight << " kg!";
}