//다시보기->숫자의 자리값을 원하면 %10으로 자리수 생각하기
/* 
value 10으로 나눈 나머지는 value의 일의자리.
value 10으로 나누면 한자리 없애줌.
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