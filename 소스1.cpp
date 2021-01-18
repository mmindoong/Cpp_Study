#include <iostream>

using namespace std;

int main() {
	char a;

	cout << "입력하세요." << endl;
	cin >> a;

	if (a >= 65 && a <= 90) {
		a = a + 32;
		cout << a;

	}
	else if (a >= 97 && a <= 122) {
		a = a - 32;
		cout << a;
	}
	else
	{
		cout << "Not character";
	}



	return 0;



}