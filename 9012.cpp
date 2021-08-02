#include <iostream>
#include <stack>
#include <string>
using namespace std;
//���ڿ��� �޾Ƽ� [���� ��ȣ�϶�] push ,
//[�ݴ� ��ȣ�� ��] ���� ���ο� ���� ��ȣ�� ������ pop.
//������ false => �ѽ��� �ƴ�
//[���ڿ��� �� Ȯ������ ��] ���� ���ο� ���� ��ȣ�� ������ false

bool check(string str) {
	stack<char> s;
	for (int i = 0; i < str.length(); i++)
	{
		char g = str[i];

		if (g == '(')
		{
			s.push(str[i]);
		}
		else
		{
			if (!s.empty())
			{
				s.pop();
			}
			else 
			{
				return false;
			}
		}
	}
	return s.empty();
}
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string str;
		cin >> str;
		
		if (check(str))
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

}