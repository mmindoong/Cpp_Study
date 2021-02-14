#include <iostream>
using namespace std;

int main()
{
	int c, n, num;
	int sum = 0;
	double result;

	

	cin >> c;
	for (int i = 0; i < c; i++)
	{
		int num = 0;
		cin >> n;

		int* score = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		int avg = sum / n;
		for (int k = 0; k < n; k++)
		{
			if (score[k] > avg)
			{
				num++;
			}
		}
		delete[] score;
		result = (double)num / n * 100;

		cout.precision(3);
		cout << result << "%" << endl;

	}
}