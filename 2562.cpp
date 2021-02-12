#include <iostream>
using namespace std;

int main()
{
	int index = 0;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	int max = arr[0];

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] >= max)
		{
			int index = i+1;
			int max = arr[i];
		}
	}

	cout << max << '\n' << index;
	return 0;
}