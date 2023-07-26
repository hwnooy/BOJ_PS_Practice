#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v;
    int n, num;
    cin >> n;
    while(n--){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (int i : v) cout << i << "\n";
    
    return 0;
}