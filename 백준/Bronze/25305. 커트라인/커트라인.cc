#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int ppl, rwd, score[1001];
    cin >> ppl >> rwd;
    for(int k=0; k<ppl; k++){
        cin >> score[k];
    }
    for (int i=0; i<ppl; i++){
        for (int j=0; j<ppl-(i+1); j++){
            if (score[j]<score[j+1]){
                int tmp = score[j];
                score[j]=score[j+1];
                score[j+1]=tmp;
            }
        }
    }
    // 0 1 2 3 4 
    cout << score[rwd-1];
}