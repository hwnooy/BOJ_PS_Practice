#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int k;
        cin >> k;

        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_map<int, int> countMap; // To keep track of the count of each element

        for (int i = 0; i < k; ++i) {
            char op;
            int n;
            cin >> op >> n;

            if (op == 'I') {
                maxHeap.push(n);
                minHeap.push(n);
                countMap[n]++;
            } else if (op == 'D') {
                if (!maxHeap.empty()) {
                    if (n == 1) {
                        // Remove the max element
                        while (!maxHeap.empty() && countMap[maxHeap.top()] == 0) {
                            maxHeap.pop();
                        }
                        if (!maxHeap.empty()) {
                            countMap[maxHeap.top()]--;
                            maxHeap.pop();
                        }
                    } else if (n == -1) {
                        // Remove the min element
                        while (!minHeap.empty() && countMap[minHeap.top()] == 0) {
                            minHeap.pop();
                        }
                        if (!minHeap.empty()) {
                            countMap[minHeap.top()]--;
                            minHeap.pop();
                        }
                    }
                }
            }
        }

        // Find the non-zero max and min elements
        while (!maxHeap.empty() && countMap[maxHeap.top()] == 0) {
            maxHeap.pop();
        }

        while (!minHeap.empty() && countMap[minHeap.top()] == 0) {
            minHeap.pop();
        }

        if (maxHeap.empty() || minHeap.empty()) {
            cout << "EMPTY\n";
        } else {
            cout << maxHeap.top() << " " << minHeap.top() << "\n";
        }
    }

    return 0;
}
