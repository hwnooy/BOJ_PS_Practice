#include <bits/stdc++.h>
using namespace std;

int sbin, bro;
bool check[100001]; 

int bfs() {
    priority_queue<pair<int, int>, 
    vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    check[sbin] = true;
    pq.push({ 0, sbin });  

    while (!pq.empty()) {
        int time = pq.top().first;
        int n = pq.top().second;
        pq.pop();
        
        if (n == bro) {
            return time; 
        }

        if (n * 2 < 100001 && !check[n * 2]) {
            check[n * 2] = true;
            pq.push({ time, n * 2 });
        }

        if (n + 1 < 100001 && !check[n + 1]) {
            check[n + 1] = true;
            pq.push({ time + 1, n + 1 });
        }

        if (n - 1 >= 0 && !check[n - 1]) {
            check[n - 1] = true;
            pq.push({ time + 1, n - 1 });
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> sbin >> bro;
    cout << bfs();
    return 0;
}
