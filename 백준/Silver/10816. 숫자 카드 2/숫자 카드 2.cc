#include <iostream>
#include <algorithm>
using namespace std;
int arr[500001]; // 상근이가 가지고 있는 카드개수

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, x;
    cin >> n;
    for (int k=0; k<n; k++) cin >> arr[k];
    sort(arr, arr+n);
    cin >> m;
    for (int i=0; i<m; i++){
        cin >> x;
        cout << upper_bound(arr, arr+n, x) - lower_bound(arr, arr+n, x)<< " ";
    }
}