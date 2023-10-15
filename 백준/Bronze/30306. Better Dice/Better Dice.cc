#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> dice1(n), dice2(n);
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < n; i++) cin >> dice1[i];
	for (int i = 0; i < n; i++) cin >> dice2[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dice1[i] > dice2[j]) ans1++;
			else if (dice1[i] < dice2[j]) ans2++;
		}
	}
	if (ans1 > ans2) cout << "first\n";
	else if (ans1 == ans2) cout << "tie\n";
	else cout << "second\n";
	return 0;
}