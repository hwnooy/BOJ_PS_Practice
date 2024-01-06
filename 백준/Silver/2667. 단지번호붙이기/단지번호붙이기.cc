#include <bits/stdc++.h>
using namespace std;

int dx[] = { -1, 1, 0, 0};
int dy[] = { 0, 0, -1, 1};

int n;
string s[25]; // 왜 이걸 쓰는지는 몰겠지만 일단 쓴다.
bool v[25][25];

int dfs(int x, int y){

    v[x][y]=1; // 해당 dfs로 호출 (x,y) 방문 처리
    int ret = 1; // 연결 요소 리턴, 기준 점에 인접한 집의 갯수
    for (int k=0; k<4; k++){

        // next 좌표 설정
        int nx = x+dx[k];
        int ny = y+dy[k];

        if (0 <= nx && nx < n && 0<=ny && ny < n &&
            !v[nx][ny] && s[nx][ny]=='1') ret += dfs(nx, ny);
    }
    return ret;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) cin >> s[i];
    vector<int> ans;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (!v[i][j] && s[i][j]=='1'){ // 방문이 안된 상태면
                ans.push_back(dfs(i,j)); // 해당 기준점?에 대한 탐색
            }
        }
    }

    cout << ans.size() << "\n";
    sort(ans.begin(), ans.end());
    for (auto x : ans ) cout << x << "\n";

}
