//�м�ã��
#include <iostream>
int main() {
	int lower = 0;
	int upper = 0;
	int cnt = 1;
	int input;
	std::cin >> input;

	while (input > cnt) {
		input -= cnt;
		cnt++;
	}

	if (cnt % 2 != 0) //Ȧ�迭(�ö�)
	{
		for (int i = cnt; i > 0; i--) {
			upper = i;
			lower++;
			input--;
			if (input == 0)
				break;
		}
	}
	else //¦���϶� �и�� 1�� ����, ���ڴ� 1�� ����
	{
		for (int i = cnt; i > 0; i--)
		{
			lower = i; //�и�� cnt
			upper++; //���� 0 -> 1����

			input--;
			if (input == 0)
			{
				break;
			}
		}
	}
	std::cout << upper << "/" << lower;

	return 0;
}