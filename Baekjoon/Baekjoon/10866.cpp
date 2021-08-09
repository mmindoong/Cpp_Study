#include <iostream>
#include <deque>

using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);

	int N, x;
	cin >> N;
	string word;

	deque<int> q;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		if (word == "push_front")
		{
			cin >> x;
			q.push_front(x);
		}
		else if (word == "push_back")
		{
			cin >> x;
			q.push_back(x);
		}
		else if (word == "pop_front")
		{
			if (q.size() == 0)
			{
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop_front();
			}

		}
		else if (word == "pop_back")
		{
			if (q.size() == 0)
			{
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
				q.pop_back();
			}

		}
		else if (word == "front")
		{
			if (q.size() == 0)
			{
				cout << "-1" << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (word == "back")
		{
			if (q.size() == 0)
			{
				cout << "-1" << '\n';
			}
			else
			{
				cout << q.back() << '\n';
			}
		}
		else if (word == "size")
		{
			cout << q.size() << '\n';

		}
		else if (word == "empty")
		{
			cout << q.empty() << '\n';
		}
	}
	return 0;
}