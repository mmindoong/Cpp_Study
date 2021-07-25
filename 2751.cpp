#include <iostream>
#include <algorithm>
int main() {
	int N;
	int small;
	std::cin >> N;

	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];

	}
	std::sort(arr, arr + N);
	for (int i = 0; i < N; i++)
	{
		std::cout << arr[i] << '\n';

	}


}