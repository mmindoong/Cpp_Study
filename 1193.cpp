#include <iostream>
using namespace std;

int main()
{
	int cnt = 1;
	int inputnum;
	int upper=0; //분자
	int lower=0; //분모
	cin >> inputnum;
	
	//몇번째 줄인지 검사
	while (cnt < inputnum)
	{
		inputnum -= cnt;
		cnt++;
	}
	//14인경우 cnt는 5째줄

	if (cnt % 2 != 0) //홀수일때
	//분모는 1씩 증가, 분자는 1씩 감소
	{
		for (int i = cnt; i > 0; i--)
		{
			upper = i; //분자는 cnt
			lower++; //분모는 0 -> 1 증가

			inputnum--;
			if (inputnum == 0)
			{
				break;
			}
 		}
	}

	else //짝수일때 분모는 1씩 감소, 분자는 1씩 증가
	{
		for (int i = cnt; i > 0; i--)
		{
			lower = i; //분모는 cnt
			upper++; //분자 0 -> 1증가

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