#include <iostream>

using namespace std;

int main() {

	int fahrenheit;
	int Celsius;

	cout << "Please enter Fahrenheit value : " ;
	cin >> fahrenheit;

	Celsius = (fahrenheit - 32) * 5 / 9;

	cout << "Celsius value is :" << Celsius << endl;


}