#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    int k;
    cin >> k;
    int num, sum;
    sum=0; 
    stack <int> stk;
    
    while(k--){
       cin >> num;
        if (num!=0) {
            stk.push(num);
            sum = sum+num;
        }
        else if (num == 0){
            int tmp = stk.top();
            sum = sum-tmp;
            stk.pop();
        }
    }
    cout << sum;
    
    return 0;
}
            