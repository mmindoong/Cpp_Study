#include <iostream>
#include <string>
using namespace std;

int main()
{
    int alpha[26] = { 0, };
    string str;
    int max = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++) //alpha배열에서 알파벳 개수 세기
    {
        alpha[toupper(str[i]) - 'A']++;
    }

    int max_index = 0; //alpha 배열에서 가장 큰 값 저장
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            max_index = i;
        }
    }

    int count = 0; //가장 큰 값을 갖는 알파벳이 중복되면 ?출력
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == max)
            count++;
        if (count >= 2)
        {
            cout << "?" << endl;
            return 0;
            }
    }

    cout << (char)(max_index + 65) << endl; //문자열로 변환
    return 0;
}

