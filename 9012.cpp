#include <iostream>
#include <stack>
#include <string>
using namespace std;
//문자열을 받아서 [여는 괄호일때] push ,
//[닫는 괄호일 때] 스택 내부에 여는 괄호가 있으면 pop.
//없으면 false => 한쌍이 아님
//[문자열을 다 확인했을 때] 스택 내부에 여는 괄호가 있으면 false

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