#include<iostream>
using namespace std;

int main()
{
    int N, layer = 1, sum = 1; 
    cin >> N;

    if (N == 1) cout << 1;
    else
    {
        while (true)
        {
            sum += layer * 6;  //n�� �����ϴ� sum�� ������ layer�ִ��� Ŭ�� �����ϰ� ��������
                                //layer�� �� ���(1�϶� layer +1����)

            if (N <= sum) break;
            layer++; //�� ���� �ű� �� ayer�� �� �÷������.
        }
        cout << layer + 1;
    }


    return 0;
}