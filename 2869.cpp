#include <iostream>
int main() {
	int day=0;
	int noon, night;
	int height;
	std::cin >> noon >> night >> height;

	if ((height - noon) % (noon - night) == 0)
		day = (height - noon) / (noon - night)+1;
	else
		day = (height - noon) / (noon - night) + 2;

	std::cout << day;
	return 0;
}