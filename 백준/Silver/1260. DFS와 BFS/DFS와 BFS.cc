#include <bits/stdc++.h>
using namespace std;

vector<int> arr[1000];
bool visited_bfs[1000];
bool visited_dfs[1000];
queue<int> q;
int n, m, start;

void dfs(int x){
    
    if (visited_dfs[x]) return;
    visited_dfs[x] = true;
    cout << x << " ";
    for (auto a : arr[x]){
        if(!visited_dfs[a]) {
            dfs(a);
        }
    }
}

void bfs(int x){
    q.push(x);
    visited_bfs[x]=true;
    while(!q.empty()){
        int front = q.front();
        cout << front << " ";
        q.pop();
        
        for (auto a : arr[front]){
            if (visited_bfs[a]) continue;
            else {
                q.push(a);
                visited_bfs[a]=true;
            }   
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> start;
    
    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        sort(arr[i].begin(), arr[i].end()); 
    }
    
    dfs(start);
    cout << "\n";
    bfs(start);
}