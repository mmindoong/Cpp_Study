#include <iostream>
using namespace std;

int main()
{
	int cnt = 1;
	int inputnum;
	int upper=0; //����
	int lower=0; //�и�
	cin >> inputnum;
	
	//���° ������ �˻�
	while (cnt < inputnum)
	{
		inputnum -= cnt;
		cnt++;
	}
	//14�ΰ�� cnt�� 5°��

	if (cnt % 2 != 0) //Ȧ���϶�
	//�и�� 1�� ����, ���ڴ� 1�� ����
	{
		for (int i = cnt; i > 0; i--)
		{
			upper = i; //���ڴ� cnt
			lower++; //�и�� 0 -> 1 ����

			inputnum--;
			if (inputnum == 0)
			{
				break;
			}
 		}
	}

	else //¦���϶� �и�� 1�� ����, ���ڴ� 1�� ����
	{
		for (int i = cnt; i > 0; i--)
		{
			lower = i; //�и�� cnt
			upper++; //���� 0 -> 1����

			inputnum--;
			if (inputnum == 0)
			{
				break;
			}
		}
	}
	cout << upper << "/" << lower;

	return 0;
}