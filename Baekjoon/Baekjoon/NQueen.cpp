#include <iostream>
#include <cmath>

using namespace std;
#define MAX 14
// 입력
int n;

// 찾은 경우의 수 
int cnt = 0;

// queen의 위치를 저장할 배열의 길이를 maximum 으로 정적 할당
int queen_loc[MAX];

// 해당 행, 열 위치가 퀸의 위치로 가능한지 확인
int possible_loc(int row) {

    // 입력 받은 행까지 탐색하며
    // 이전에 찾은 퀸들의 열 위치와 같은 열에 위치해 있거나, 대각선에 위치해 있다면 불가능하다고 판단
    for (int i = 0; i < row; ++i) {
        if ((queen_loc[i] == queen_loc[row]) || (row - i == (abs(queen_loc[row] - queen_loc[i])))) {
            return 0;
        }
    }
    return 1;
}

// nqueen 알고리즘 수행하며, 찾은 경우의 수 덧셈
void nqueen(int row) {

    // n번째 행까지 n개의 퀸을 놓는 하나의 경우의 수를 찾았다면, 함수 종료
    if (row == n) {
        cnt++;
        return;
    }
    // 모든 경우의 수를 찾지 못한 경우
    else {

        // 현재 행에서 모든 열 검사
        for (int col = 0; col < n; ++col) {

            // 행 위치에 열 값을 할당
            queen_loc[row] = col;

            // 현재 행, 열 위치가 퀸의 위치로 문제 없다면, 다음 행 검사
            if (possible_loc(row)) {
                nqueen(row + 1);
            }
            // 현재 행, 열 위치가 퀸의 위치로 문제가 있다면, 이어서 반복문 진행
        }
    }
}

int main(void) {

    // 입력
    cin >> n;

    // nqueen 알고리즘 수행 (0번째 행부터 탐색)
    nqueen(0);

    // nqueen 알고리즘 수행 후, 찾은 경우의 수 반환
    cout << cnt;

    return 0;

}
/*
static int col[16];
int n;
int ans;

static bool isPossible(int c) {
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

void dfs(int row) {
    // 현재 열이 체스판을 넘어 섰으면
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
            else {// 4. 백트래킹 수행, 해당노드는 가지치기 되어진다.
                col[row] = 0;
            }
        }
    }
}

int main()
{
    for (int i = 1; i <= n; i++) {
        // 첫번째 퀸의 시작점은 행을 기준. (i = 1) => (1, 1), (i = 2) => (1, 2), (i = 3) => (1, 3)
        //col은 체스판의 크기의 좌표를 담은 배열
        col[1] = i;

        // 1. DFS 수행 (다음 열인 2열 이동)
        dfs(2);
    }
    cout << ans;
}
*/