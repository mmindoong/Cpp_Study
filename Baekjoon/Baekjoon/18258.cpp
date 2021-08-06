#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);

	int N ,x;
	cin >> N;
	string word;

	queue<int> q;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		if (word == "push")
		{
			cin >> x;
			q.push(x);
		}
		else if (word == "pop")
		{
			if (q.size() == 0)
			{
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
			
		}
		else if (word == "front")
		{
			cout << q.front() << '\n';
			if (q.size() == 0)
			{
				cout << "-1"<<'\n';
			}
		}
		else if (word == "back")
		{
			cout << q.back() << '\n';
			if (q.size() == 0)
			{
				cout << "-1" <<'\n';
			}
		}
		else if (word == "size")
		{
			cout << q.size() <<'\n';
			
		}
		else if (word == "empty")
		{
			if (q.size() == 0)
				cout << q.empty() << '\n';
		}
	}
	return 0;
}
