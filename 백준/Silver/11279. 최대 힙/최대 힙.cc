#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    priority_queue<int, vector<int>> pq;
    int n;
    cin >> n;

    for (int k = 0; k < n; k++) {
        int num;
        cin >> num;

        if (pq.empty() && num==0) {
            cout << 0 << "\n";
        }

        else if (num != 0) {
            pq.push(num);
        }

        else if (num == 0) {
            int max = pq.top();
            cout << max << "\n";
            pq.pop();
        }
    }
    return 0;
}