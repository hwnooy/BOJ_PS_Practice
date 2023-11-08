#include <bits/stdc++.h>
using namespace std;

int answer=0;
int n, r, c;

void divide(int x, int y, int size) { // [x][y]가 시작포인트 
    
    if (x==r && y==c){
        cout<< answer; return;
    }
    if (r>=x && r<x+size && c>=y && c<y+size) {
        divide(x, y, size/2);
        divide(x, y + size/2, size/2);
        divide(x + size/2, y, size/2);
        divide(x + size/2, y + size/2, size/2);
    }
    else {
        answer += size*size;
    }


}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> r >> c;
    divide(0, 0, (1<<n));
    return 0;
}