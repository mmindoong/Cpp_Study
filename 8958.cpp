#include <iostream>
#include <string>
using namespace std;

int main()
{
	string arr;
	int score = 0;
	int sum = 0;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr;
		for (int j = 0; j < arr.length(); j++)
		{
			if (arr[j] == 'O')
			{
				score++;
				sum += score;
			}
			else if (arr[j] == 'X')
			{
				score = 0;
			}
		}
		cout << sum << endl;
		sum = 0;
		score = 0;

	}
	return 0;
}