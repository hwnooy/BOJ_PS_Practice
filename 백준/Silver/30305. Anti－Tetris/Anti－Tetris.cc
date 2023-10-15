#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;

vector<string> rotate(vector<string>& before) {
	int n = before.size(), m = before[0].length();
	vector<string> ret(m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			ret[i].push_back(before[j][i]);
		reverse(ret[i].begin(), ret[i].end());
	}
	return ret;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int h, w;
	cin >> h >> w;
	vector<string> board(h);
	for (int i = 0; i < h; i++) cin >> board[i];
	for (int t = 0; t < 4; t++) {
		bool flag = false;
		for (int i = 0; i < board[0].length(); i++) {
			for (int j = board.size() - 1; j > 0; j--) {
				if (board[j][i] == '#' && board[j - 1][i] == '.') {
					flag = true;
					break;
				}
			}
			if (flag) break;
		}
		if (!flag) {
			cout << board.size() << " " << board[0].length() << "\n";
			for (auto& it : board) {
				for (auto& c : it) {
					if (c == '#') cout << ".";
					else cout << "#";
				}
				cout << "\n";
			}
			return 0;
		}
		board = rotate(board);
	}
	cout << "impossible\n";
	return 0;
}