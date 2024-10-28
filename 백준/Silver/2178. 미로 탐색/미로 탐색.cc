#include <bits/stdc++.h>
using namespace std; 

queue<pair<int, int>> q;  // q : 내가 넣을 큐 
int miro[101][101]; // miro : 입력으로 넣어놓은 숫자 
int dist[101][101];  // 거리 배열
int n, m;
// {1,0} {0,1} {-1,0} {0,-1} 상하좌우 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

// BFS 함수
int bfs(int x, int y) {
    q.push({x, y});
    dist[x][y] = 1; // 시작점은 1로 설정 (칸 수를 세기 위해)

    while(!q.empty()) {
        auto cur = q.front();  // pair<int, int>로 받음
        q.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            
            // 범위를 벗어났을 때 패스
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; 
            // 이미 방문했거나 벽(0)일 때 패스
            if (dist[nx][ny] > 0 || miro[nx][ny] != 1) continue;
            
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }
    return dist[n-1][m-1];  // 도착점의 값 리턴
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); 
    
    cin >> n >> m; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            miro[i][j] = c - '0';  // 입력을 char로 받아서 숫자로 변환
        }
    }
    
    // dist 배열 초기화 (-1로 모두 초기화)
    memset(dist, 0, sizeof(dist));
    
    cout << bfs(0, 0) << '\n';  // 결과 출력
    
    return 0;
}
