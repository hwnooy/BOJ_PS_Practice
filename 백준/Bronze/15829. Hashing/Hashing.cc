#include <iostream>
#include <cmath>
#define M 1234567891
using namespace std;


int main() {
    int lng;
    long long int ans = 0;
    long long int r=1;
    string str;
    int arr[1000];
    cin >> lng;
    cin >> str;

    for (int k = 0; k < lng; k++) {
        arr[k] = str[k] - 96;
    }

   for (int k = 0; k < lng; k++) {
       ans += (arr[k] * r)%M;
       r = (r*31)%M;
   }
    cout << ans%M;

}