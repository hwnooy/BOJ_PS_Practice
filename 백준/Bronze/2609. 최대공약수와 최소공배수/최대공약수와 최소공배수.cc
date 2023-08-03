#include <iostream>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}

int lcm(int a, int b) {
    return a / gcd(a,b) * b; 
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << "\n" << lcm(n1, n2);
    
}