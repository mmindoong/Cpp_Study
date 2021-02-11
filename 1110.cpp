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
		//새로운 수는 유닛이 십의자리로, 유닛과 텐의 합이 일의자리로 생성됨.
		count++;

		if (initnumbers == newnumber) {
			break;
		}
		numbers = newnumber;

	}
	cout << count << endl;

	return 0;
}