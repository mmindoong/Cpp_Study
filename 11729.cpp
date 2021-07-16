#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int to, int middle)
{
    if (n == 1)
        cout << start << ' ' << to << '\n';
    else
    {
        hanoi(n - 1, start, middle, to);
        cout << start << ' ' << to << '\n';
        hanoi(n - 1, middle, to, start);
    }
}
int main() {
    int num;
    cin >> num;
    cout << (int)pow(2, num) - 1 << "\n";
    hanoi(num, 1, 3, 2);
}