#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i < n + 1; i++) //����
	{
		for (int k = 0; k < n - i; k++) //���ٴ� ���� ����
		{
			cout << " ";
		}
		for (int j = 1; j < i + 1; j++) //���ٴ� �� ����
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}