#include <iostream>

using namespace std;

int main() {

	int number;
	int sum = 0;

	cout << "number : ";
	cin >> number;

	for (int i = 0; i <= number; i++)
	{
		sum += i;
	}

	cout << "Sum of 1 to " << number << " = " << sum << endl;

}