//�ٽú���->������ �ڸ����� ���ϸ� %10���� �ڸ��� �����ϱ�
/* 
value 10���� ���� �������� value�� �����ڸ�.
value 10���� ������ ���ڸ� ������.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int value = a * b * c;

	int arr[10] = {0};
	
	while (value != 0)
	{
		arr[value % 10] += 1; //
		value /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}