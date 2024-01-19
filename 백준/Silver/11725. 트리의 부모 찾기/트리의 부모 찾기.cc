#include <bits/stdc++.h>
using namespace std;
vector<int> v[100002];
int p[100002];

void dfs(int x){
    for (auto y : v[x]){
        if (!p[y]){
            p[y]=x; // 부모 넣어줌 
            dfs(y);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int node1, node2;
        cin >> node1 >> node2;
        v[node1].push_back(node2);
        v[node2].push_back(node1);
    }
    dfs(1);
    for (int i=2; i<=n; i++) cout << p[i] << '\n';
}