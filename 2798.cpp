#include <iostream>
#define MAX 100

int main() {
	int N;
	int value;
    int min = 9999999;
	int goal, sum = 0;
	int arr[MAX] = { 0, };
	std::cin >> N >> value;

	for (int i = 0; i < N; i++)
		std::cin >> arr[i];

    for (int i = 0; i < N- 2; i++)
        for (int j = i + 1; j < N - 1; j++)
            for (int k = j + 1; k < N; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (value- sum < min && value - sum >= 0) {
                    min = value - sum;
                    goal = sum;
                }
            }
    std::cout << goal;
}