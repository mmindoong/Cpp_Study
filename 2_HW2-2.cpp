#include <iostream>

using namespace std;

int Fibonacci(int num) {
	int n_1 = num-1, n = num, i, temp;

	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else {
		for (i = 1; i < n; i++) {
			temp = n;
			n += n_1;
			n_1 = temp;
		}
		return n;
	}
}
int main() {
	int n;
	cin >> n;


	cout << "Fibonacci(" << n << "): " << Fibonacci(n) << endl;
}



