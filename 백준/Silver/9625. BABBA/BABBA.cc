#include <iostream>
using namespace std;

int main(){
    int k;
    int a[46], b[46];
    a[0]=1, a[1]=0, b[0]=0, b[1]=1;
    
    cin >> k;
    for (int n=1; n<k+1; n++){
        a[n+1]=a[n-1]+a[n];
        b[n+1]=b[n-1]+b[n];
    }
    cout << a[k] << " " << b[k];
    
    
}