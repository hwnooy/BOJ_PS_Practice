#include <bits/stdc++.h>
using namespace std;
bool pelin(string str){
    int len = str.size(); 
    for (int i=0; i<len/2; i++){
        if (str[i] != str[len-1-i]) return false;
    }
    return true; 
}
int main(){
    
    while(true){
        string str; 
        cin >> str; 
        if (str=="0") break; 
        else {
            if (pelin(str)) cout << "yes\n";
            else cout << "no\n";
        }
    }
}