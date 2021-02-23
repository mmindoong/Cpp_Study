#include<iostream>

using namespace std;

bool wordCheck(string str) {
    bool alphabet[26] = { false };
                                //���ĺ��� �ش��ϴ� ��ġ�� index 0~25�� �°� �Ҵ��ϱ� ����

    for (int i = 0; i < str.length(); i++) {

        if (alphabet[str[i] - 'a']) { //true �̸� �̹� �־����Ƿ� false
            return false;

        }
        else {                   //false �̸� ó�� ���� ���ĺ� �̹Ƿ� check

            char tmp = str[i];
            alphabet[str[i] - 'a'] = true;

            while (true) {
                if (tmp != str[++i]) {    
                    i--;
                    break;
                }
            }

        }

    }
    return true;
}



int main(void) {

    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (wordCheck(str)) {
            count++;
        }

    }
    cout << count;

    return 0;
}
