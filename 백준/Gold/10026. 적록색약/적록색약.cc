#include <bits/stdc++.h>
using namespace std;

int n; 
string str[100];
bool v[101][101][2];
int ans[2];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, int t){ 
    // t=0 => 정상인
    // t=1 => 적록색약 
    
    v[x][y][t] = 1; 
    // 좌우상하를 탐색하기 위해 for문 4번 반복 
    for (int k=0; k<4; k++){
        int nx = x+dx[k];
        int ny = y+dy[k];
        
        if (nx<0 || nx>= n || ny<0 || ny>= n ) continue;
        bool ok = (str[nx][ny] == str[x][y]); // 
        
        if (t){
            if (str[nx][ny]=='R' && str[x][y]=='G') ok=1; 
            if (str[nx][ny]=='G' && str[x][y]=='R') ok=1; 
        }
        
        if (!v[nx][ny][t] && ok) dfs(nx,ny,t); // 인근에 같은게 있으면 
        
    }
}    


int main(){
    cin >> n;
    for (int k=0; k<n; k++) cin >> str[k];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            for (int t=0; t<2; t++){
                if(!v[i][j][t]) {
                    dfs(i,j,t);
                    ans[t]++;
                }
            }
        }
    }
    
    cout << ans[0] << " " << ans[1];
    
}

