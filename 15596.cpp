#include <iostream>

using namespace std;

int intsum(int n);

int intsum(int n)
{
	int sum = 0;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}

	for (int j = 0; j < n; j++)
	{
		sum += arr[j];
	}
	return sum;

}


int main()
{
	int n;
	cin >> n;
	int sum = intsum(n);
	cout << sum;
}
