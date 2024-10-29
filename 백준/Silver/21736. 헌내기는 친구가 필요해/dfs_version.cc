#include <bits/stdc++.h>
using namespace std; 

int n, m; 
string camp[601];
int dist[601][601]; 
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0}; 

int dfs(int x, int y) {
    dist[x][y] = 1; 
    int result = 0; 
   
    if (camp[x][y] == 'P') result++; 
    
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (dist[nx][ny] != -1 || camp[nx][ny] == 'X') continue;

        result += dfs(nx, ny);
    }

    return result;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int ix = 0, iy = 0; 
    cin >> n >> m;
   
    for (int i = 0; i < n; i++) {
        cin >> camp[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dist[i][j] = -1;
            if (camp[i][j] == 'I') {
                ix = i;
                iy = j;
            }
        }
    }
    
    int result = dfs(ix, iy);

    if (result == 0) {
        cout << "TT"; 
    } else {
        cout << result; 
    }
}
