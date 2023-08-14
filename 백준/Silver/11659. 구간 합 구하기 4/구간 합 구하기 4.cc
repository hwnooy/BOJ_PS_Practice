#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[100001];
    int pre[100001];
    int n, m;
    cin >> n >> m;
    
    // pre[0] = 0, 
    for (int k=1; k<=n; k++){
        int sum=0;
        cin >> arr[k];
        pre[k] = pre[k-1]+arr[k];  // 누적합 1부터 n까지 
    }
    for (int i=0; i<m; i++){            
        int p, q;
        cin >> p >> q; 
        cout << pre[q]-pre[p-1] << "\n";
    }

    return 0;
}