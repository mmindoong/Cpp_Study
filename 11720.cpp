#include <iostream>

using namespace std;

int main() {
	int n;
	char ch;
	int sum = 0;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> ch;
		sum += ch - 48;
	}

	cout << sum << endl;

	return 0;


}