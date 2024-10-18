#include <bits/stdc++.h>
using namespace std;
long long fact(long long x){
    
    if (x==1) return 1;
    return x*fact(x-1);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    long long n;
    long long week = 7*24*60*60;
    cin >> n;
    long long a = fact(n);
    cout << a/week;
}
