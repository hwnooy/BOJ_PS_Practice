#include <iostream>
#include <algorithm>
using namespace std;

int M, N;
int snack[1000001];

bool check(int len) {
    int cnt = 0;
    for (int i = 0; i < N; i++) 
        cnt += snack[i] / len;
    return cnt >= M;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N;
    int low = 1, high = 0;

    for (int i = 0; i < N; i++) {
        cin >> snack[i];
        high = max(high, snack[i]);
    }
    
    int result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (check(mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << result << "\n";
    return 0;
}
