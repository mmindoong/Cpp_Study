#include <iostream>

using namespace std;

int main()
{
	int numbers, tens, units, newnumber;
	int count = 0;
	int initnumbers;

	cin >> numbers;
	initnumbers = numbers;


	while (true)
	{
		tens = numbers / 10;
		units = numbers % 10;
		newnumber = (units * 10) + (units + tens) % 10;
		//���ο� ���� ������ �����ڸ���, ���ְ� ���� ���� �����ڸ��� ������.
		count++;

		if (initnumbers == newnumber) {
			break;
		}
		numbers = newnumber;

	}
	cout << count << endl;

	return 0;
}