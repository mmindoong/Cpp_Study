#include <iostream>

class vertex {
public:
	int x, y;
};
int main() {
	vertex v1, v2, v3;
	vertex v4;
	std::cin >> v1.x >> v1.y;
	std::cin >> v2.x >> v2.y;
	std::cin >> v3.x >> v3.y;

	if (v1.x == v2.x)
		v4.x = v3.x;
	else if (v1.x == v3.x)
		v4.x = v2.x;
	else if (v2.x == v3.x)
		v4.x = v1.x;

	if (v1.y == v2.y)
		v4.y = v3.y;
	else if (v1.y == v3.y)
		v4.y = v2.y;
	else if (v2.y == v3.y)
		v4.y = v1.y;

	std::cout << v4.x << ' ' << v4.y;

}