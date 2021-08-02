#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Point {
	public:
		int age;
		string name;
		Point(int x, string y) :age(x), name(y) {}

};
bool compare(const Point& a, const Point& b)
{
	if (a.age < b.age)
		return true;
	else return false;
}

int main() {
	int N;
	std::cin >> N;
	int x;
	string y;
	vector<Point> v;;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		v.push_back(Point(x, y));
	}
	stable_sort(v.begin(), v.end(), compare);
	//sort(v.begin(),v.end()); 함수
	//[begin,end) 범위로 정렬을 한다. (begin <= 범위 <end)
	// 
	//sort(v.begin(),v.end(),custom_func); 함수
	//3번째 매개변수는 어떤 식으로 정렬할 지 알려주는 함수. bool형식 넣어줄 수 있다.
	for (int i = 0; i < N; i++) {
		cout << v[i].age << ' ' << v[i].name << '\n';
	}

}