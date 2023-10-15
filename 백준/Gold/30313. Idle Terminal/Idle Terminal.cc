#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
const int MAX = 1e7 + 7;
int n, k;
vector<int> d;
priority_queue<int, vector<int>, greater<int>> pq;
bool msg[MAX];
vector<int> times;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> k;
	d.resize(n);
	for (int i = 0; i < k; i++) pq.push(0);
	msg[0] = true;
	times.push_back(0);
	for (int i = 0; i < n; i++) {
		cin >> d[i];
		int tmp = pq.top();
		pq.pop();
		pq.push(tmp + d[i]);
		if (!msg[tmp + d[i]]) {
			msg[tmp + d[i]] = true;
			times.push_back(tmp + d[i]);
		}
	}
	sort(times.begin(), times.end());
	int maxVal = 0;
	for (int i = 0; i < times.size() - 1; i++)
		maxVal = max(maxVal, times[i + 1] - times[i]);
	cout << maxVal << "\n";
	return 0;
}