#include <iostream>
#include <cmath>
using namespace std;
int n, ans;
int* col = new int[16];//col은 체스판의 크기의 좌표를 담은 배열

bool isPossible(int c)
{
    // 이전 열들을 탐색하면서 유망한 노드인지 확인
    for (int i = 1; i < c; i++) {
        // 상위 노드에서 같은 행에 퀸이 있는지 여부
        if (col[i] == col[c]) {
            return false;
        }
        // 대각선 검사, 상위 노드의 퀸과 현재 노드의 퀸의 가로 세로 거리가 같은지 검사
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
            // 현재 위치하고 있는 노드의 좌표를 저장 (row: 열, i: 행)
            col[row] = i;

            // 2. 유망한 노드 검토
            if (isPossible(row)) {
                // 3. 서브 트리 이동 (해당 노드의 하위 노드)
                dfs(row + 1);
            }
            else {

                // 4. 백트래킹 수행, 해당노드는 가지치기 되어진다.
                col[row] = 0;
            }
        }
    }
}

int main()
{
    for (int i = 1; i <= n; i++) {
        // 첫번째 퀸의 시작점은 행을 기준. (i = 1) => (1, 1), (i = 2) => (1, 2), (i = 3) => (1, 3)
        col[1] = i;

        // 1. DFS 수행 (다음 열인 2열 이동)
        dfs(2);
    }
   cout << ans << '\n';
}