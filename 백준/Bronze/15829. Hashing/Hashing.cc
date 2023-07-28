#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lng;
    int ans = 0;
    string str;
    int arr[1000];
    cin >> lng;
    cin >> str;

    for (int k = 0; k < lng; k++) {
        arr[k] = str[k] - 96;
    }

   for (int k = 0; k < lng; k++) {
       ans += arr[k] * pow(31, k);
   }
    cout << ans;
    return 0;
}