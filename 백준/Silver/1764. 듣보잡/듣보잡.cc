#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, result; 
    result = 0; 
    cin >> n >> m;

    vector<string> answer;
    vector<string> NotHeard(n);  
    vector<string> NotSeen(m);   

    for (int i = 0; i < n; i++) {
        cin >> NotHeard[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> NotSeen[i];
    }

    set<string> notHeardSet(NotHeard.begin(), NotHeard.end());
    for (int i = 0; i < m; i++) {
        if (notHeardSet.find(NotSeen[i]) != notHeardSet.end()) {
            result++;
            answer.push_back(NotSeen[i]);
        }
    }

    sort(answer.begin(), answer.end());  
    cout << result << "\n";

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << "\n";  
    }

    return 0;
}
