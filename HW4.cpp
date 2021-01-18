#include <iostream>

using namespace std;

int main() {

	int floor;
	cin >> floor;

	for (int i = 1; i <= floor; i++) {
		for (int j = 1; j < floor- i; j++)
			cout << " ";
		for (int j = 0; j < (2 * i) - 1; j++)
			cout << "*";
		cout << endl;
	}
}