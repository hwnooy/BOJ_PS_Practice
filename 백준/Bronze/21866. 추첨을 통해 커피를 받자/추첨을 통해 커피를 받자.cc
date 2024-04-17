#include <bits/stdc++.h>
using namespace std; 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int score[9] = {100, 100, 200, 200, 300, 300, 400, 400, 500};
    bool sig = true; // 추첨대상자 여부가 아니라 해커여부, 그렇게 되면 해커도 추첨대상자가 아니게 되니까
    int sum=0; 
    for (int i=0; i<9; i++){
        int q;
        cin >> q;
        sum+=q;
        if (score[i]<q) {
            sig = false;
            break;
        }
        else continue;
    }
    
    if (sig) {
        if (sum<100) cout << "none";
        else cout << "draw";
    }
    else {
        cout << "hacker";
    }
}

//  100점, 100점, 200점, 200점, 300점, 300점, 400점, 400점, 500점
//  위의 점수를 담은 벡터와 점수를 담은 벡터를 각각 비교해서 학생점수가 크면! hacker로 판단 

    
