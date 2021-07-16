#include <iostream>
int factorial(int num)
{
	if (num == 1)
		return 1;
	else if (num == 0)
		return 1;
	else
		return num* factorial(num - 1);
}

int main() {
	int n;
	std::cin >> n;
	std::cout << factorial(n);
}