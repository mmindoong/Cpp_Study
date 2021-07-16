#include <iostream>

int fibo(int num1) {
	if (num1 == 0)
		return 0;
	else if (num1 == 1)
		return 1;
	else {
		return fibo(num1 - 1) + fibo(num1 - 2);
	}
}

int main() {
	int n;

		std::cin >> n;
		std::cout << fibo(n) <<'\n';

}