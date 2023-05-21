#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    long long int S, sum, result;
    sum = 0, result = 1;
    cin >> S;

    while ((result * (result + 1) / 2) < S) {
        result=result+1;
    }
    if (result * (result + 1) / 2 == S) cout << result;
    else cout << result -1;

    return 0;
}