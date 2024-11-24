// #include <string>
// #include <vector>
// #include <cmath>
// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while( min(bill[0], bill[1])>min(wallet[0],wallet[1]) || max(bill[0], bill[1])>max(wallet[0],wallet[1]) ){
        if (bill[0]>bill[1]){
            bill[0]=bill[0]/2;
        } else {
            bill[1]=bill[1]/2; 
        }
        answer++;
    }
    
    return answer;
}

int main(){
    //ios::sync_with_stdio(0); cin.tie(0);
    vector<int> wallet;
    vector<int> bill;
    for (int i=0; i<2; i++){
        int a;
        cin >> a;
        wallet.push_back(a);
    }
    
    for (int i=0; i<2; i++){
        int a;
        cin >> a;
        bill.push_back(a);
    }
    cout << solution(wallet, bill);
}