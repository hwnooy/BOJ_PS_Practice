#include <bits/stdc++.h>
using namespace std;

vector<int> arr[500000];
bool visited[500000];
int result = 0; 
int n, m;

void dfs(int x){
    
    if(visited[x]) return;
    visited[x]=true;
    for (auto a : arr[x]){
        dfs(a);
    }
}  

int main(){
    cin >> n >> m;
    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i=1; i<=n; i++){
         if (!visited[i]) {
             result++;
             dfs(i);
        }
    }    
    cout << result;
}