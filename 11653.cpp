#include <iostream>
int main() {
	int N;
	std::cin >> N;
	
	if (N == 1)return 0;

	for (int i = 2; i <= N; i++)
	{
		while (N % i == 0)
		{
			std::cout << i << '\n';
			N /= i;
		}
	}
}