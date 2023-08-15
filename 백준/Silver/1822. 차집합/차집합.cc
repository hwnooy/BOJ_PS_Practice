#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    set<int> a; set<int> b;
    int a_size, b_size, cnt, numA, numB;
    
    cin >> a_size >> b_size;
    
    while(a_size--){
        cin >> numA;
        a.insert(numA);
    }
    
    while(b_size--){
        cin >> numB;
        b.insert(numB);
    }
    // A에는 속하면서 B에는 속하지 않는 원소의 개수\n, 구체적 원소 증가순 출력
    // A에서 b를 지워 
    cnt=0;
    for(int i : b){   
        a.erase(i);
        cnt++;
    }

    if (cnt>=1) {
        cout << a.size() << "\n";
        for (int i : a){
            cout << i << " ";
        }
    } 
    
    else{
        cout << 0;
    }
}