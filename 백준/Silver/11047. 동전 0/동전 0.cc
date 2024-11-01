#include <iostream>
using namespace std;

int main(){
    int n, k, result = 0;
    cin >> n >> k;
    int arr[10];  

    for (int i = 0; i < n; i++) {
       cin >> arr[i];
    }
    
    for (int j = n - 1; j >= 0; j--) {
        if (arr[j] <= k) {  
            result += k / arr[j]; 
            k %= arr[j];          
        }
    }
    
    cout << result; 
    return 0;
}
