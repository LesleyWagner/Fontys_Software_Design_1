#include <iostream>

using namespace std;

int main(void) {
	double waveLength;
	double frequencyLowBound = -1;
	double frequencyHighBound = -1;
	string waveType;

	cout << scientific;
	cout << "This program gives information about an electromagnetic wave, given its wavelength.\n";

	cout << "Provide a wavelength in meters: ";
	cin >> waveLength;

	if (waveLength > 1e-1) {
		waveType = "radio waves";
		frequencyHighBound = 3e9;
	}
	else if (waveLength > 1e-3 && waveLength <= 1e-1) {
		waveType = "microwave";
		frequencyLowBound = 3e9;
		frequencyHighBound = 3e11;
	}
	else if (waveLength > 7e-7 && waveLength <= 1e-3) {
		waveType = "infrared";
		frequencyLowBound = 3e11;
		frequencyHighBound = 4e14;
	}
	else if (waveLength > 4e-7 && waveLength <= 7e-7) {
		waveType = "visible light";
		frequencyLowBound = 4e14;
		frequencyHighBound = 7.5e14;
	}
	else if (waveLength > 1e-8 && waveLength <= 4e-7) {
		waveType = "ultraviolet";
		frequencyLowBound = 7.5e14;
		frequencyHighBound = 3e16;
	}
	else if (waveLength > 1e-11 && waveLength <= 1e-8) {
		waveType = "x-rays";
		frequencyLowBound = 3e16;
		frequencyHighBound = 3e19;
	}
	else { // < 10e-11
		waveType = "gamma rays";
		frequencyLowBound = 3e19;
	}

	cout << waveLength << endl;
	cout << "The type of wave is " << waveType << endl;

	if (frequencyLowBound < 0) {
		cout << "The frequency of the wave is smaller than " << frequencyHighBound << endl;
	}
	else if (frequencyHighBound < 0) {
		cout << "The frequency of the wave is larger than " << frequencyLowBound << endl;
	}
	else {		
		cout << "The frequency of the wave is from " << frequencyLowBound << " to " << frequencyHighBound << endl;
	}

	return 0;
}