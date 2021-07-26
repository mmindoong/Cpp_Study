#include <iostream>
#include <algorithm>
#include <string>
int main() {
	unsigned N = 1000000000;
	std::string str;
	std::cin >> str;

	std::sort(str.begin(), str.end());
	for (int i = str.size()-1; i >= 0; i--)
	{
		std::cout << str[i];
	}
	std::cout << '\n';
}