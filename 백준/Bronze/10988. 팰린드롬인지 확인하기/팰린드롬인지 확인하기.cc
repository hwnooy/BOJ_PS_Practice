#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int len = str.size();
    bool sig = true;
    for (int k=0; k<len/2; k++){
        // 합이 k-1이어야 함
        // len-1-k
        if (str[k]==str[len-1-k]) continue;
        else sig = false;
    }
    if (sig) cout << "1";
    else cout << "0";
}
