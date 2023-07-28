// 1 ~ 8 : ascending , 8 ~ 1 : discending, 그 외는 mixed 
#include <iostream>
using namespace std;
int main() {
    int n, cnt;
    cnt = 0;
    string result = "";
    int arr[9];
    for (n = 0; n < 8; n++) {
        cin >> arr[n];
    }

    for (int i = 0; i < 7; i++) {
        if (arr[i] < arr[i + 1] && arr[i]-arr[i+1]== -1) {
            cnt++;
        }
        else if (arr[i] > arr[i + 1] && arr[i]-arr[i+1]== 1) {
            cnt--;
        }
    }

    if (cnt == 7) cout << "ascending";
    else if (cnt == -7) cout << "descending";
    else cout << "mixed";
}