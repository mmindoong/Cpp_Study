#include <iostream>
using namespace std;
int N;//������ ����
long long M;
// ������ ������ ����
long long trees[1000001];

//� ���� height�� �־������� �� height�� �߸� Ʈ���� ���� �κ��� ���� ���� M �̻��̸� 
//�� height�� H�� ������ �����ϰ� �ȴ�.
bool isPossible(unsigned int height) { 
	unsigned int taken = 0;
	for (int i = 0; i < N; i++) {
		if (trees[i] >= height)
			taken += (trees[i] - height);
		if (taken >= M) return true;
	}
	return false;
}

//isPossible���� true�� ��ȯ�Ǿ��ٸ� �ϴ� ���� �� �ĺ��̸� ret�� �� ���� �����س��´�.
//�� ���� ���� �����Ƿ� first�� ���� +1���Ѽ� �ٽ� ����Ž���� �����Ѵ�.
//isPossible���� false�� ��ȯ�Ǿ��ٸ� last �ĺ��� ���� �ϳ� �ٿ��� �ٽ� �����Ѵ�.
int solve()
{
	unsigned int first = 0;
	unsigned int last = 1000000000;
	unsigned int mid,ret;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (isPossible(mid))
		{
			ret = mid;
			first = mid + 1;
		}
		else
		{
			last = mid -1;
		}
		//�� -1�� �Ͽ�����? mid���� ��Һ񱳸� ���� �� �����ϴ� ���̹Ƿ�, mid������ ���ʰ����� ������.
			// first <= mid <= last�� �׻� ������ �Ǿ� ���� ������ �߻����� �ʴ´�!
	}
	return ret;//���ܱ��� ���� �ִ�
}
int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
	cin >> N >> M;


	for (int i = 0; i < N; i++)
	{
		cin >> trees[i];

	}
	cout << solve() << '\n';
	
	
}