#include<iostream>
using namespace std;

int main()
{
	int t;
	int j, k;
	int h, w, n; //����, ���, n��° �մ�
	int cnt = 0;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		for (j = 1; j <= w; j++)
		{
			for (k = 1; k <= h; k++) //������ ä����
			{
				cnt++;
				if (cnt == n)
					break;
			}
			if (cnt == n)
				break;
		}
		if (j < 10)
			cout << k << "0" << j << '\n';
		else
			cout << k << j << "\n";

		cnt = 0;
	}

	return 0;
}