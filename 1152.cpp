#include <iostream>
#include <string>
using namespace std;

int main()
{

	string input;
	int empty = 0;
	int count = 0;
	int result;

	getline(cin, input);

	int prev = 0, next = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			empty++;
		}
	}

	if (empty != input.length())

	{
		for (int i = 1; i < input.length() - 1; i++)
		{
			if (input[i] == ' ')
			{
				prev = i - 1;
				next = i + 1;
				if (input[prev] != ' ' && input[next] != ' ')
				{
					count++;
				}
			}



		}
		cout << count + 1;
	}
	else
	{
		cout << 0;
	}


	return 0;
}
