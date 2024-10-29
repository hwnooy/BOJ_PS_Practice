#include <bits/stdc++.h>
using namespace std; 
int n, m; 
string camp[601];
int dist[601][601];
queue<pair<int, int>> q; 
int dx[4]={0, 0, -1, 1};
int dy[4]={1, -1, 0, 0};

int bfs(int x, int y){
    int result = 0; 
    q.push({x,y});
    while (!q.empty()){
        auto front = q.front();    
        q.pop(); 
        
        for (int dir=0; dir<4; dir++){
            int nx = front.first+dx[dir];
            int ny = front.second+dy[dir];

            if (nx<0 || nx>=n || ny<0 || ny>=m) continue;
            else if (dist[nx][ny]!=-1 || camp[nx][ny]=='X') continue; 
            else if (camp[nx][ny]=='P') result++; 
        
            dist[nx][ny]+=1; // 방문처리 : 이걸 결과로 못 돌려주려나 
            q.push({nx,ny});
        }
        
    }

    return result;    
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int ix=0, iy=0; 
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> camp[i];
    }
    // O : 빈공간, X : 벽, I : 도연이(한번만 주어짐), P : 사람  
    // I에서 시작해서 P를 몇번 만날 수 있는지 
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            dist[i][j]=-1;
            if (camp[i][j]=='I'){
                ix = i; iy = j; 
            }
        }
    }
    
    int result = bfs(ix, iy);
    if (result==0) cout << "TT";
    else cout << result;
}