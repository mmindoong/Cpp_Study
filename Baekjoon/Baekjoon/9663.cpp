#include <iostream>
#include <cmath>
using namespace std;
int n, ans;
int* col = new int[16];//col�� ü������ ũ���� ��ǥ�� ���� �迭

bool isPossible(int c)
{
    // ���� ������ Ž���ϸ鼭 ������ ������� Ȯ��
    for (int i = 1; i < c; i++) {
        // ���� ��忡�� ���� �࿡ ���� �ִ��� ����
        if (col[i] == col[c]) {
            return false;
        }
        // �밢�� �˻�, ���� ����� ���� ���� ����� ���� ���� ���� �Ÿ��� ������ �˻�
        if (abs(col[i] - col[c]) == abs(i - c)) {
            return false;
        }
    }
    return true;

}

void dfs(int row)
{
    if (row > n) {
        ++ans;
    }
    else {
        for (int i = 1; i <= n; i++) {
            // ���� ��ġ�ϰ� �ִ� ����� ��ǥ�� ���� (row: ��, i: ��)
            col[row] = i;

            // 2. ������ ��� ����
            if (isPossible(row)) {
                // 3. ���� Ʈ�� �̵� (�ش� ����� ���� ���)
                dfs(row + 1);
            }
            else {

                // 4. ��Ʈ��ŷ ����, �ش���� ����ġ�� �Ǿ�����.
                col[row] = 0;
            }
        }
    }
}

int main()
{
    for (int i = 1; i <= n; i++) {
        // ù��° ���� �������� ���� ����. (i = 1) => (1, 1), (i = 2) => (1, 2), (i = 3) => (1, 3)
        col[1] = i;

        // 1. DFS ���� (���� ���� 2�� �̵�)
        dfs(2);
    }
   cout << ans << '\n';
}