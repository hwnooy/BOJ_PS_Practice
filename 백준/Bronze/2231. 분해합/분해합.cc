#include <iostream>
#include <cmath>
using namespace std;

int nsum(int x) {
    int nsum = 0;
    while (x > 0) {
        nsum += x % 10;
        x /= 10;
    }
    return nsum;
}

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        if (i+nsum(i)==n) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}
