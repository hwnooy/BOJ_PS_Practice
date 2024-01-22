#include <bits/stdc++.h>
using namespace std;
int n, mxidx;
int dp[1002]; int a[1002]; int p[1002]; 

void func_LIS(){
    
    for (int i=0; i<n; i++){
        p[i]=-1; 
        dp[i]=1; // 초기조건 
        for (int j=0; j<i; j++){
            if (a[j]<a[i] && dp[j]+1 > dp[i]) {
                dp[i] =dp[j]+1;
                p[i]=j;
            }
        }
        if (dp[i]>dp[mxidx]) mxidx=i;
    }
    cout << dp[mxidx] << "\n";
    vector<int> ans;
    for (int i=mxidx; i!=-1; i=p[i]) ans.push_back(i);
    for (int i=ans.size()-1; i>=0; i--) cout << a[ans[i]] << ' ';
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    func_LIS();
}