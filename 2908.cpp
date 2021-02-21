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

	tmp = p1[0]; //p1의 제일 앞에 있는 숫자를 tmp에 저장
	p1[0] = p1[2]; //p1의 마지막 숫자를 p1[0]에 저장
	p1[2] = tmp; //앞의 저장된 tmp의 숫자를 p1[2]로 바꿔줌

	temp1 = stoi(p1); //stoi -> string to int (string 헤더파일 필요)

	tmp = p2[0];
	p2[0] = p2[2];
	p2[2] = tmp;

	temp2 = stoi(p2);

	if (temp1 > temp2)
		cout << temp1;
	else cout << temp2;

	return 0;

}