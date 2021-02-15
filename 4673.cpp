#include <iostream>
#define N 10001
using namespace std;
int infiniteNum(int n);

int main()
{
	int arr[N];

	for (int i = 1; i < N; i++) //1부터 10000까지 배열
	{
		arr[i] = i;
	}
	 
	for (int i = 1; i < N; i++) //무한생성수에 해당하는 배열은 0으로 만들어주기
	{
		int Num = infiniteNum(i);

		if (Num < N)
		{
			arr[Num] = 0;
		}
	}

	for (int i = 1; i < N; i++) //1-10000 중 0이 아닌 배열은 셀프넘버이므로 출력
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << '\n';
		}
	}
	return 0;
}

int infiniteNum(int n) //무한수열수
{
	int nextNum = n;

	while (true)
	{
		//2021 = 2021 + 1+ 2+ 0 + 2
		//원래숫자%10 일의자리부터 10자리씩 나누고 다시 일의자리 더해나감
		if (n == 0) break;
		nextNum = nextNum + n % 10;
		n = n / 10;
	}
	return nextNum;
}
