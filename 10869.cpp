#include <iostream>

using namespace std;

int main() {
	int A = 1, B = 1;
	cin >> A >> B;

	if (A < 0 || B < 0 || B>10000)
		cout << "�ٽ� �Է��ϼ���" << endl;
	else {

		cout << A+B << endl;
		cout << A - B << endl;
		cout << A * B << endl;
		cout << A / B << endl;
		cout << A % B << endl;
	}

}