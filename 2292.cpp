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
            sum += layer * 6;  //n에 도달하는 sum의 값보다 layer최댓값이 클때 종료하고 그전까지
                                //layer의 수 출력(1일때 layer +1해줌)

            if (N <= sum) break;
            layer++; //한 방을 옮길 때 ayer의 수 늘려줘야함.
        }
        cout << layer + 1;
    }


    return 0;
}