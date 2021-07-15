#include <iostream>
#include <queue>
#include <string>
std::queue<int> v;
int tmp[10000];

int main() {
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{	
		std::string com;
		std::cin >> com;
		if (com == "push")
		{
			int X;
			std::cin >> X;
			v.push(X);
		}
		else if (com == "pop")
		{
			if (v.empty())
				std::cout << "-1" << '\n';

			else {
				std::cout << v.front() << '\n';
				v.pop();
			}
		}
		else if (com == "size")
		{
			if (v.empty())
				std::cout << "0" << '\n';
			else
				std::cout << v.size() << '\n';
		}
		else if (com == "empty")
		{
			if (v.empty())
				std::cout << "1" << '\n';
			else
				std::cout << "0" << '\n';
		}
		else if (com == "front")
		{
			if (v.empty())
				std::cout << "-1" << '\n';
			else
			{
				std::cout << v.front() << '\n';
			}
		}
		else if (com == "back")
		{
			if (v.empty())
				std::cout << "-1" << '\n';
			else
				std::cout << v.back() << '\n';
		}
	}
}