#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* 방법 1. 2차원 벡터
int main() {
	int N;
	std::cin >> N;
	vector<vector<int>> arr;
	arr.assign(N, vector<int>(2, 0)); 

	/* n*m사이즈인 벡터 초기화 
	vector<vector<int>> arr(n, vector<int>(m,0));
		또는
	vector<vector<int>> arr;
	arr.assign(n, vector<int>(m,0));

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i][0];
		cin >> arr[i][1];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0] << " " << arr[i][1] << '\n';
	}

}
*/

class Point {
public:
	int x;
	int y;
	Point(int x, int y) :x(x), y(y) {}

};
bool compare(Point& a, Point& b)
{
	if (a.x < b.x)
		return true;
	else if (a.x == b.x)
	{
		if (a.y < b.y)
			return true;
		else
			return false;
	}
	else return false;
}

int main() {
	int N;
	std::cin >> N;
	int x, y;
	vector<Point> v;;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		v.push_back(Point(x, y));
	}
	sort(v.begin(), v.end(), compare);
	//sort(v.begin(),v.end()); 함수
	//[begin,end) 범위로 정렬을 한다. (begin <= 범위 <end)
	// 
	//sort(v.begin(),v.end(),custom_func); 함수
	//3번째 매개변수는 어떤 식으로 정렬할 지 알려주는 함수. bool형식 넣어줄 수 있다.
	for (int i = 0; i < N; i++) {
		cout << v[i].x << ' ' << v[i].y << '\n';
	}

}