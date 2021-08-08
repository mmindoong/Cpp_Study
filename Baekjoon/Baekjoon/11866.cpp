#include <iostream>
#include <queue>

int main()
{
	int N;
	int K;
	std::queue<int> q;
	std::cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	std::cout << "<";
	while (!q.empty()) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}

		std::cout << q.front();
		q.pop();

		if (!q.empty()) {
			std::cout << ", ";
		}

	}
	std::cout << ">" << '\n';
}