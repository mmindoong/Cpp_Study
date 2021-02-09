#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i < n + 1; i++) //각줄
	{
		for (int k = 0; k < n - i; k++) //각줄당 공백 갯수
		{
			cout << " ";
		}
		for (int j = 1; j < i + 1; j++) //각줄당 별 갯수
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}