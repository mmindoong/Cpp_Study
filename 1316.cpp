#include<iostream>

using namespace std;

bool wordCheck(string str) {
    bool alphabet[26] = { false };
                                //알파벳에 해당하는 위치를 index 0~25에 맞게 할당하기 위해

    for (int i = 0; i < str.length(); i++) {

        if (alphabet[str[i] - 'a']) { //true 이면 이미 있었으므로 false
            return false;

        }
        else {                   //false 이면 처음 오는 알파벳 이므로 check

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
