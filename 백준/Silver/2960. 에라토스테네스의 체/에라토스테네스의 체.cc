#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K, cnt, answer, buf;
    cnt = 0;
    cin >> N >> K;
    //vector <int> seive(N + 1);  // 인덱스 2부터 설정할 것이므로 N+1개로 설정
    bool seive[1001] = { false, };

    for (int k = 2; k <= N; k++) {

        if (seive[k] == true) {
            continue;
        }
        for (int i = k; i <= N; i = i + k) { // N까지의 수 중에서 해당 k의 배수를 체크
            if (seive[i] == false) {
                seive[i] = true;
                cnt++;
            }
            if (cnt == K) {
                cout << i;
                break;
            }
        }
    }
    return 0;
}