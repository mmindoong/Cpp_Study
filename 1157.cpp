#include <iostream>
#include <string>
using namespace std;

int main()
{
    int alpha[26] = { 0, };
    string str;
    int max = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++) //alpha�迭���� ���ĺ� ���� ����
    {
        alpha[toupper(str[i]) - 'A']++;
    }

    int max_index = 0; //alpha �迭���� ���� ū �� ����
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            max_index = i;
        }
    }

    int count = 0; //���� ū ���� ���� ���ĺ��� �ߺ��Ǹ� ?���
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

    cout << (char)(max_index + 65) << endl; //���ڿ��� ��ȯ
    return 0;
}
