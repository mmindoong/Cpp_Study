#include <iostream>
#include <string>
using namespace std;


int main()
{
	int time =0 ;
	string word;
	cin >> word;
	int len = word.length();

	for (int i = 0; i < len; i++)
	{
		if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
		{
			time += 3;
		}
		else if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
		{
			time += 4;
		}
		else if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
		{
			time += 5;
		}
		else if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
		{
			time += 6;
		}
		else if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
		{
			time += 7;
		}
		else if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S')
		{
			time += 8;
		}
		else if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
		{
			time += 9;
		}
		else if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
		{
			time += 10;
		}
		else continue;
	}

	
	std::cout << time;
	return 0;

	
}