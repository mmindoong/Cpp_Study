#include <iostream>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		cout << i << '\n'; //endl대신 개행문자 사용하기(endl의 처리속도는 매우 느림)
	}
	return 0;
}