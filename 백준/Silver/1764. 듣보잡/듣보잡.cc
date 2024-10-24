#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    unordered_set<string> notHeard;  // 첫 번째 이름 목록 저장
    vector<string> commonNames;      // 겹치는 이름 저장

    int n, m;
    cin >> n >> m;

    // 듣도 못한 사람들 입력
    for (int k = 0; k < n; k++) {
        string name;
        cin >> name;
        notHeard.insert(name);
    }

    // 보도 못한 사람들 입력
    for (int k = 0; k < m; k++) {
        string name;
        cin >> name;
        // 듣도 못한 사람들과 겹치는지 확인
        if (notHeard.find(name) != notHeard.end()) {
            commonNames.push_back(name);
        }
    }

    // 겹치는 이름의 개수와 정렬 후 출력
    cout << commonNames.size() << "\n";
    sort(commonNames.begin(), commonNames.end());
    for (const string& name : commonNames) {
        cout << name << "\n";
    }

    return 0;
}
