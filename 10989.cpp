#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int num;

	cin >> N;

	int arr[10001] = { 0, };
	for (int i = 0; i < N; i++) //�Է¹��� ���ڿ� �ش��ϴ� �迭�� �� �������� ���� ���� ��Ÿ��.
	{
		cin >> num;
		arr[num]++;
	}

	for (int j = 1; j < 10001; j++)
	{
		while (arr[j] > 0) //arr[j]�� 0�̻��ΰ�쿡�� ���
			//�Է¹��� ����� ��
		{
			cout << j << '\n'; //�Է¹��� ���� ������ŭ ���
			arr[j]--;
		}
	}
}