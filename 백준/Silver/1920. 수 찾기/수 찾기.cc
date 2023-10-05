#include <iostream>
#include <algorithm>
using namespace std;

void binary(int n, int arr[], int size) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == n) {
            cout << "1\n";
            return;
        } else if (arr[mid] < n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "0\n";
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, arr1[100001], arr2[100001];

    cin >> n;
    for (int k = 0; k < n; k++) cin >> arr1[k];
    sort(arr1, arr1 + n);

    cin >> m;
    for (int j = 0; j < m; j++) {
        cin >> arr2[j];
        binary(arr2[j], arr1, n); 
    }

    return 0;
}
