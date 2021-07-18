#include <iostream>
int main() {
	int ninput;
	std::cin >> ninput;
	int sum;
	int part; 

	for (int i = 0; i < ninput; i++)
	{
		sum = i;
		part = i; 

		while (part)
		{
			int Rest = part % 10;
			sum += Rest;
			part /= 10;
		}
		if (ninput == sum)
		{
			std::cout << i << '\n';
			return 0;
		}
	}
	std::cout << "0" << '\n';

}