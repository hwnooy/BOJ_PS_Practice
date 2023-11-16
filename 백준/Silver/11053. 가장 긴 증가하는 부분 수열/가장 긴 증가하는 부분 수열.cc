#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; int dp[1001] = { 0, }; int arr[1001];
	
    cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int max_num = 0; 
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) // 작은 수 중에서 
				max_num = max(max_num, dp[j]); // 작은 수 중 길이가 가장 긴 것
		}
		dp[i] = max_num + 1; // 가장 긴 것을 고르고 자기 자신을 더하기 위해 1 더하기
		ans = max(ans, dp[i]); 
	}

	cout << ans;
}