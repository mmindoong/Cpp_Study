#include <iostream>

using namespace std;

int main() {

	int score;
	char grade;

	cout << "Enter your score : ";
	cin >> score;

	if (score >= 90 && score < 100)
		cout << "Your grade is : " << "A" << endl;
	else if (score >= 80 && score < 90)
		cout << "Your grade is : " << "B" << endl;
	else if (score >= 70 && score < 80)
		cout << "Your grade is : " << "C" << endl;
	else if (score >= 60 && score < 70)
		cout << "Your grade is : " << "D" << endl;
	else if (score >= 0 && score < 60)
		cout << "Your grade is : " << "F" << endl;
	else
		cout << "The score" << score << "is invalid" << endl;

}