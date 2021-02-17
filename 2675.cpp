#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, r;
	string p;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> r >> p;
		for (int j = 0; j < p.length(); j++) {
			for (int k = 0; k < r; k++) {
				cout << p[j];
			}
		}
		cout << endl;
	}
}