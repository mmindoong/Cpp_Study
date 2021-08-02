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
	//sort(v.begin(),v.end()); �Լ�
	//[begin,end) ������ ������ �Ѵ�. (begin <= ���� <end)
	// 
	//sort(v.begin(),v.end(),custom_func); �Լ�
	//3��° �Ű������� � ������ ������ �� �˷��ִ� �Լ�. bool���� �־��� �� �ִ�.
	for (int i = 0; i < N; i++) {
		cout << v[i].age << ' ' << v[i].name << '\n';
	}

}