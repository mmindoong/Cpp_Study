#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n]; //�Է¹޴� �� ����� �ƴϹǷ� �����Ҵ� ���
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0]; //for������ [0]���� ���ư��Ƿ� [0]���� �ʱ�ȭ


	/*
	//�ִ�,�ּڰ� ��
	for������ arr[i]�� ���� ������/ū���� min,max�� �����ϵ��� �ۼ�.
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