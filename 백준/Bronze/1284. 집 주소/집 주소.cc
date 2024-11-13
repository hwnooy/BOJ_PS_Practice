#include <iostream>
using namespace std;

int space[10]= {4,2,3,3,3,3,3,3,3,3};

int spaceFunc(int x){
    int result = 0; 
    if (x<10){
        result=result+space[x];
        result+=2;
    } else if (x<100){
        result=result+space[x/10]+space[x%10];
        result+=3; 
    } else if (x<1000){
        // 1234%1000=234
        result=result+space[x/100]+space[(x%100)/10]+space[x%10];
        result+=4;
    } else if (x<10000){
        // 5611 => 611
        result=result+space[x/1000]+space[x%1000/100]+space[(x%100)/10]+space[x%10];
        result+=5;
    }
    return result; 
}
int main(){
    
    while (true){
        int n; 
        cin >> n;
        if (n==0) break;
        cout << spaceFunc(n) << "\n";
    }
}