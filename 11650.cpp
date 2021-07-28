#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* ��� 1. 2���� ����
int main() {
	int N;
	std::cin >> N;
	vector<vector<int>> arr;
	arr.assign(N, vector<int>(2, 0)); 

	/* n*m�������� ���� �ʱ�ȭ 
	vector<vector<int>> arr(n, vector<int>(m,0));
		�Ǵ�
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
	//sort(v.begin(),v.end()); �Լ�
	//[begin,end) ������ ������ �Ѵ�. (begin <= ���� <end)
	// 
	//sort(v.begin(),v.end(),custom_func); �Լ�
	//3��° �Ű������� � ������ ������ �� �˷��ִ� �Լ�. bool���� �־��� �� �ִ�.
	for (int i = 0; i < N; i++) {
		cout << v[i].x << ' ' << v[i].y << '\n';
	}

}