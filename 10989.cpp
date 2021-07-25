#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int num;

	cin >> N;

	int arr[10001] = { 0, };
	for (int i = 0; i < N; i++) //입력받은 숫자에 해당하는 배열에 값 증가시켜 수의 개수 나타냄.
	{
		cin >> num;
		arr[num]++;
	}

	for (int j = 1; j < 10001; j++)
	{
		while (arr[j] > 0) //arr[j]가 0이상인경우에만 출력
			//입력받은 수라는 뜻
		{
			cout << j << '\n'; //입력받은 수의 개수만큼 출력
			arr[j]--;
		}
	}
}