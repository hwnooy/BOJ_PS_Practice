#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int arr[1000006];
vector<int> tmp;

int main() {
    int N; scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", arr + i);
        tmp.push_back(arr[i]);
    }
    sort(tmp.begin(), tmp.end());
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    // std::unique: 중복되는 수들을 vector의 뒤로 옮기고, 그 수들의 시작 이터레이터를 리턴
    for (int i = 0; i < N; i++) {
        int idx = lower_bound(tmp.begin(), tmp.end(), arr[i]) - tmp.begin();
        printf("%d ", idx);
    }
}