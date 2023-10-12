#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, arr[1000001];
	vector<int> vec;
	
	cin >> n;
	for (int k = 0; k < n; k++) {
		cin >> arr[k];
		vec.push_back(arr[k]);
	}
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
	
	for (int i = 0; i < n; i++) {
		cout << lower_bound(vec.begin(), vec.end(), arr[i])-vec.begin() << " ";
	}
	return 0;

}
