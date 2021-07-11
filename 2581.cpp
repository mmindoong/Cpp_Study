#include <iostream>
bool isPrime(int num)
{
	if (num == 1)
		return false;
	else {
		for (int i= 2; i < num; i++)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}
}

int main() {
	int M, N;
	int sum = 0;
	int min = 0;
	
	std::cin >> M;
	std::cin >> N;
	for (int i = M; i <= N; i++)
	{
		if (isPrime(i))
		{
			min = i;
			break;
		}
	}
	for (int i = M; i <= N; i++)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	
	if (sum == 0)
		std::cout << -1;
	else
		std::cout << sum << '\n' << min;
}