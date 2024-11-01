#include <iostream>
using namespace std;
int main(){
    int n, k, result;
    result=0; 
    cin >> n >> k;
    int arr[11];
    for (int i=0; i<n; i++){
       cin >> arr[i];
    }
    for (int j=n-1; j>=0; j--){
        if (arr[j] > 0 && arr[j]<=k) {
            result = result + k/arr[j];
            k = k%arr[j];
        }
    }
    cout << result; 
}
    