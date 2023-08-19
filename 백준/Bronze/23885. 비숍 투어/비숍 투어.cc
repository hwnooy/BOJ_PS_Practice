#include <iostream>
using namespace std;

int main(){
    int n, m, sx, sy, ex,ey;
    cin >> n >> m;
    cin >> sx >> sy;
    cin >> ex >> ey;
    
    if ((ex-sx)%2==0 && (ey-sy)%2==0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    
}