#include <iostream>
#include <cmath>

int main() {

	int a, b, c;
	while (1) {
		std::cin >> a >> b >> c;
		if (a > b && a > c && a * a == b * b + c * c)
			std::cout << "right" << '\n';
		else if (b> a && b > c && b* b == a * a + c * c)
			std::cout << "right" << '\n';
		else if (c > a && c > b && c * c == a * a + b * b)
			std::cout << "right" << '\n';
		else if (a == 0 && b == 0 && c == 0)
			break;
		else
			std::cout << "wrong" << '\n';
	}
	
}