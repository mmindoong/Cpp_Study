#include <iostream>

#include <string>

using namespace std;



int main() {

    int alp[26];

    string word;

    cin >> word;

    for (int i = 0; i < 26; i++) //모든 알파벳 -1로 초기화
    {
        alp[i] = -1;
    }

    for (int i = 0; i < word.length(); i++) //word에 있는 알파벳 처리
    {
        if (alp[word[i] - 'a'] == -1)
        {
            alp[word[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++) //word에 있는 알파벳은 순서가, 없을 경우에는 그대로 -1
    {
        cout << alp[i] << " ";
    }
    cout << endl;
}
