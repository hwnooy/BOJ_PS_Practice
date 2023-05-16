#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    set<string> log;
    int n;
    cin >> n;

    string ppl, attend;
    for (int k = 0; k < n; k++) {
        cin >> ppl >> attend;
        if (attend == "enter") {
            log.insert(ppl);
        }
        else if (attend == "leave") {
            log.erase(ppl);
        }
    }

    for (auto iter = log.rbegin(); iter != log.rend(); iter++) {
        cout << *iter << "\n";
    }

    return 0;
}