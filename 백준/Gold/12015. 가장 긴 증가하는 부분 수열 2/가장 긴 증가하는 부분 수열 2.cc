#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int arr[1000001];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)  cin >> arr[i];
	
	v.push_back(arr[0]);
	for (int i = 1; i < n; i++) {
		if (v.back() < arr[i])
			v.push_back(arr[i]);
        
		else if (v.back() > arr[i]) {
			auto idx = lower_bound(v.begin(), v.end(), arr[i]);
			*idx = arr[i];
		}
	}
	cout << v.size();
}