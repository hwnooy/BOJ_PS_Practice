#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100005;

vector<int> tree[MAXN];
int subtree_size[MAXN];

// 트리의 간선을 추가하는 함수
void addEdge(int u, int v) {
    tree[u].push_back(v);
    tree[v].push_back(u);
}

// DFS를 이용해 서브트리의 크기를 계산하는 함수
void dfs(int node, int parent) {
    subtree_size[node] = 1;  // 자신을 포함한 크기
    for (int child : tree[node]) {
        if (child == parent) continue;
        dfs(child, node);
        subtree_size[node] += subtree_size[child];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, q;
    cin >> n >> r >> q;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }

    // 루트 노드 r을 기준으로 서브트리 크기 계산
    dfs(r, -1);

    for (int i = 0; i < q; i++) {
        int u;
        cin >> u;
        cout << subtree_size[u] << "\n";
    }

    return 0;
}
