#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 1; i < t + 1; i++)
	{
		int A, B;
		cin >> A >> B;
		cout << "Case #" << i << ": " << A+B <<"\n" ;
	}

	return 0;

}