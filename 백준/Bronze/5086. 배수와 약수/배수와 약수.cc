#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    while (true){
        int a, b;
        cin >> a >> b; 
        if (a==0 && b==0) break;
        else {
            if (a<=b && b%a==0) cout << "factor\n";
            else if (a>b && a%b==0) cout << "multiple\n";
            else cout << "neither\n";
        } 
    }
}