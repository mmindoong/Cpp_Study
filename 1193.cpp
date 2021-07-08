//분수찾기
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

	if (cnt % 2 != 0) //홀배열(올라감)
	{
		for (int i = cnt; i > 0; i--) {
			upper = i;
			lower++;
			input--;
			if (input == 0)
				break;
		}
	}
	else //짝수일때 분모는 1씩 감소, 분자는 1씩 증가
	{
		for (int i = cnt; i > 0; i--)
		{
			lower = i; //분모는 cnt
			upper++; //분자 0 -> 1증가

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