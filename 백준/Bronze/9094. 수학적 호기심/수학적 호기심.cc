#include <iostream>
using namespace std;
int main(){
    int t_case, result;
    cin >> t_case;
    for (int i=0; i<t_case; i++){
        int n, m, a, b;
        result=0;
        cin >> n >> m;
        for (a=1; a<b; a++){
            for (b=a+1; b<n; b++){
                if(((a*a+b*b+m)%(a*b))==0) result++;
                else continue;
            }
        }
        cout << result << "\n";
    }

}