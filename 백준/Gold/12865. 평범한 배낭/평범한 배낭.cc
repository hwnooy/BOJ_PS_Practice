#include <bits/stdc++.h>

using namespace std;

int main()

{   // c : 버틸 수 있는 무게  => k
    // n : 물품의 수 => n

    // w : 무게 => wi
    // v : 가치 => vi

    int n, k, v, w;
    int bag[101][100001];
    int weight[101]; int value[101]; // 물건 i에 대한 무게니까
    cin >> n >> k;

    for (int i=0; i<=n; i++){
        bag[i][0] = 0;
    }

    for (int w=0; w<=k; w++){
        bag[0][w] = 0;
    }

    for (int i=1; i<=n; i++) {
            cin >> w >> v;
            weight[i]=w;
            value[i]=v;
    }
    // k i,w : 배열 1부터 i까지
    // 임시용령 : 1일경우 최대가치 2일때의
    for (int i=1; i<=n; i++){
            for (int w=1; w<=k; w++){
                if (weight[i]> w) bag[i][w] = bag[i-1][w];
                else bag[i][w] = max(bag[i-1][w], bag[i-1][w-weight[i]]+value[i]);
            }
    }

    cout << bag[n][k];
    return 0;
}
