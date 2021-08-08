#include <iostream>
#include <cmath>

using namespace std;
#define MAX 14
// �Է�
int n;

// ã�� ����� �� 
int cnt = 0;

// queen�� ��ġ�� ������ �迭�� ���̸� maximum ���� ���� �Ҵ�
int queen_loc[MAX];

// �ش� ��, �� ��ġ�� ���� ��ġ�� �������� Ȯ��
int possible_loc(int row) {

    // �Է� ���� ����� Ž���ϸ�
    // ������ ã�� ������ �� ��ġ�� ���� ���� ��ġ�� �ְų�, �밢���� ��ġ�� �ִٸ� �Ұ����ϴٰ� �Ǵ�
    for (int i = 0; i < row; ++i) {
        if ((queen_loc[i] == queen_loc[row]) || (row - i == (abs(queen_loc[row] - queen_loc[i])))) {
            return 0;
        }
    }
    return 1;
}

// nqueen �˰��� �����ϸ�, ã�� ����� �� ����
void nqueen(int row) {

    // n��° ����� n���� ���� ���� �ϳ��� ����� ���� ã�Ҵٸ�, �Լ� ����
    if (row == n) {
        cnt++;
        return;
    }
    // ��� ����� ���� ã�� ���� ���
    else {

        // ���� �࿡�� ��� �� �˻�
        for (int col = 0; col < n; ++col) {

            // �� ��ġ�� �� ���� �Ҵ�
            queen_loc[row] = col;

            // ���� ��, �� ��ġ�� ���� ��ġ�� ���� ���ٸ�, ���� �� �˻�
            if (possible_loc(row)) {
                nqueen(row + 1);
            }
            // ���� ��, �� ��ġ�� ���� ��ġ�� ������ �ִٸ�, �̾ �ݺ��� ����
        }
    }
}

int main(void) {

    // �Է�
    cin >> n;

    // nqueen �˰��� ���� (0��° ����� Ž��)
    nqueen(0);

    // nqueen �˰��� ���� ��, ã�� ����� �� ��ȯ
    cout << cnt;

    return 0;

}
/*
static int col[16];
int n;
int ans;

static bool isPossible(int c) {
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

void dfs(int row) {
    // ���� ���� ü������ �Ѿ� ������
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
            else {// 4. ��Ʈ��ŷ ����, �ش���� ����ġ�� �Ǿ�����.
                col[row] = 0;
            }
        }
    }
}

int main()
{
    for (int i = 1; i <= n; i++) {
        // ù��° ���� �������� ���� ����. (i = 1) => (1, 1), (i = 2) => (1, 2), (i = 3) => (1, 3)
        //col�� ü������ ũ���� ��ǥ�� ���� �迭
        col[1] = i;

        // 1. DFS ���� (���� ���� 2�� �̵�)
        dfs(2);
    }
    cout << ans;
}
*/