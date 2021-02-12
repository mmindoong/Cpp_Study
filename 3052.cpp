#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int count = 0;

	for (int i = 0; i < 9; i++)
	{
		int num;
		cin >> num;
		arr[i] = num % 42;
		
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 0; j++)
		{
			if (arr[i] != arr[j])
			{
				count++;
			}
		}
	}

	cout << count;
}