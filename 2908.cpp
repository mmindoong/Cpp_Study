#include <iostream>
#include <string>
using namespace std;

int main()
{
	string p1;
	string p2;

	char tmp;
	int temp1;
	int temp2;

	cin >> p1 >> p2;

	tmp = p1[0]; //p1�� ���� �տ� �ִ� ���ڸ� tmp�� ����
	p1[0] = p1[2]; //p1�� ������ ���ڸ� p1[0]�� ����
	p1[2] = tmp; //���� ����� tmp�� ���ڸ� p1[2]�� �ٲ���

	temp1 = stoi(p1); //stoi -> string to int (string ������� �ʿ�)

	tmp = p2[0];
	p2[0] = p2[2];
	p2[2] = tmp;

	temp2 = stoi(p2);

	if (temp1 > temp2)
		cout << temp1;
	else cout << temp2;

	return 0;

}