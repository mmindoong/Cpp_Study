#include <iostream>
using namespace std;
int N;//나무의 갯수
long long M;
// 가져갈 나무의 미터
long long trees[1000001];

//어떤 높이 height가 주어졌을때 이 height로 잘린 트리의 남은 부분을 전부 합쳐 M 이상이면 
//이 height는 H의 조건을 만족하게 된다.
bool isPossible(unsigned int height) { 
	unsigned int taken = 0;
	for (int i = 0; i < N; i++) {
		if (trees[i] >= height)
			taken += (trees[i] - height);
		if (taken >= M) return true;
	}
	return false;
}

//isPossible에서 true가 반환되었다면 일단 답이 될 후보이며 ret에 그 값을 저장해놓는다.
//더 높을 수도 있으므로 first의 값을 +1시켜서 다시 이진탐색을 시행한다.
//isPossible에서 false가 반환되었다면 last 후보의 값을 하나 줄여서 다시 시행한다.
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
		//왜 -1을 하였을까? mid값과 대소비교를 했을 때 제한하는 것이므로, mid값보다 왼쪽값으로 제한함.
			// first <= mid <= last가 항상 성립이 되어 역전 현상이 발생하지 않는다!
	}
	return ret;//절단기의 높이 최댓값
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