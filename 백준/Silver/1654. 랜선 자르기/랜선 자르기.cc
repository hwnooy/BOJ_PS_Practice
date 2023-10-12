#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int a, n;
int arr[10005];

bool solve(ll x){
    ll cur = 0;
    for (int i=0; i<a; i++) cur += arr[i]/x;
    return cur>=n;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> n;
    
    for (int i=0; i<a; i++) cin >> arr[i];
    ll left = 1;
    ll right = 0x7fffffff;
    while(left<right){
        ll mid = (left+right+1)/2;
        if (solve(mid)) left = mid;
        else right = mid-1;
    }
    cout << left; 
}