#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
queue<int> q;
bool visited[100];
int result=0;


int bfs(int x){
    q.push(x); 
    visited[x]=true;
    
    while(!q.empty()){
        int front = q.front();
        q.pop();
        // 이제 인접한거 큐에 넣기 
        for (auto u : adj[front]){
            if(visited[u]) continue;
            q.push(u);
            visited[u]=true;
            result++;
        }
    }
    return result;
   
}

int main(){
    
    ios::sync_with_stdio(0); cin.tie(0);
    int compNum, compPair;
    
    cin >> compNum >> compPair;
    
    
    for (int k=0; k<compPair; k++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    cout << bfs(1);
    
    
}
