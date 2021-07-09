#include <iostream>

int count(int k, int n)
{
	if (n == 1)
		return 1;
	if (k == 0)
		return n;
	return (count(k - 1, n) + count(k, n - 1));
}


int main() {
	int T, k, n;
	std::cin >> T;
	for (int i = 0; i < T; i++)
	{
		std::cin >> k >> n;
		std::cout << count(k, n) << '\n';
	}
}