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
		int C = A + B;
		cout << "Case #" << i << ": " << A <<" + "<< B << " = "<< C<<"\n";
	}

	return 0;

}