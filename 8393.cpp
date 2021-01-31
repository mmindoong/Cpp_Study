#include <iostream>
using namespace std;
int main(void) {
	int n, i;
	int sum=0;
	cin >> n;
	for (i = 1; i < n+1; i++) {
		sum += i;
	}
	cout << sum << endl;
}