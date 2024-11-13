#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    long long result = 1; 
    for (int i=n; i>0; i--){
        result = result*i; 
    }
    cout << result;
}