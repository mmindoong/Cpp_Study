#include <iostream>
#include <string>

void Add();

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(NULL);

    Add();
}

void Add()
{
    std::string a, b;
    std::cin >> a >> b;

    //a의 문자열길이가 더 길도록 구현
    if (a.size() < b.size())
        swap(a, b);

    int carry = 0;
    std::string answer;
    //문자열의 마지막 자리부터 각 자릿수마다 더해주고 올림해주는 과정 반복
    for (int i = 1; i <= a.size(); i++)
    {
        int index_a = a.size() - i;
        int index_b = b.size() - i;
        char char_a = a[index_a];
        char char_b = (index_b < 0 ? '0' : b[index_b]);
        //예를 들어 a 가 3자리수이고 b가 2자리문자열이면, i=3일때 b의 인덱스는 존재하지 않음.

        int new_num = (char_a - '0') + (char_b - '0') + carry;
        //각자리수의 합
        carry = (10 <= new_num) ? new_num / 10 : 0;
        char remain = (new_num % 10) + '0';
        answer = remain + answer;
    }
    if (carry)
        answer = char(carry + '0') + answer;
    std::cout << answer;
}

