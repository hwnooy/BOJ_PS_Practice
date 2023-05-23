#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	priority_queue <int, vector <int>, greater <int>> pq;
	int N, x;

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> x;
			if (pq.size() < N) {
				pq.push(x);
			}
			else {
				if (x > pq.top()) {
					pq.pop();
					pq.push(x);
				}
			}
		}
	}

	int result = pq.top();
	cout << result;

	return 0;
}