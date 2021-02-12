#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n]; //입력받는 건 상수가 아니므로 동적할당 사용
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0]; //for문에서 [0]부터 돌아가므로 [0]으로 초기화


	/*
	//최댓값,최솟값 비교
	for문으로 arr[i]를 돌려 작은값/큰값을 min,max로 저장하도록 작성.
	*/

	for (int i = 0; i < n; i++) 
	{
		if (arr[i] >= max)
			max = arr[i];

		if (arr[i] <= min)
			min = arr[i];
	}
	delete[] arr;

	cout << min << " " << max << endl;

	return 0;
}