#include <iostream>
#include <vector>
std::vector<int> v;
int main() {
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::string com;
		std::cin >> com;
		if (com == "push") {
			int X;
			std::cin >> X;
			v.push_back(X);
		}
		else if (com == "pop") {
			if (!v.empty()) {
				std::cout << v.back() << '\n';
				v.pop_back();
			}
			else
				std::cout << "-1" << '\n';
		}
		else if (com == "top") {
			if (!v.empty())
				std::cout << v.back() << '\n';
			else
				std::cout << "-1" << '\n';
		}
		else if (com == "size") {
			std::cout << v.size() <<'\n';
		}
		
		else if (com == "empty") {
			if (v.empty())
				std::cout << "1" << '\n';
			else
				std::cout << "0" << '\n';
		}
	}
}