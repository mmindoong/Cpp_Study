#include <iostream>
bool isPrime(int num) {
	if (num == 1)
		return false;
	else
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}
}


int main() {
	int N;
	int count = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		std::cin >> num;
		if (isPrime(num))
			count++;
	}
	std::cout << count;
}