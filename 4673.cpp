#include <iostream>
#define N 10001
using namespace std;
int infiniteNum(int n);

int main()
{
	int arr[N];

	for (int i = 1; i < N; i++) //1���� 10000���� �迭
	{
		arr[i] = i;
	}
	 
	for (int i = 1; i < N; i++) //���ѻ������� �ش��ϴ� �迭�� 0���� ������ֱ�
	{
		int Num = infiniteNum(i);

		if (Num < N)
		{
			arr[Num] = 0;
		}
	}

	for (int i = 1; i < N; i++) //1-10000 �� 0�� �ƴ� �迭�� �����ѹ��̹Ƿ� ���
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << '\n';
		}
	}
	return 0;
}

int infiniteNum(int n) //���Ѽ�����
{
	int nextNum = n;

	while (true)
	{
		//2021 = 2021 + 1+ 2+ 0 + 2
		//��������%10 �����ڸ����� 10�ڸ��� ������ �ٽ� �����ڸ� ���س���
		if (n == 0) break;
		nextNum = nextNum + n % 10;
		n = n / 10;
	}
	return nextNum;
}
