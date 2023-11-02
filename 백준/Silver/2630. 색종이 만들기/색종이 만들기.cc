#include <bits/stdc++.h>
using namespace std;

int arr[130][130] = { 0, };
int color;
bool cut;
int white = 0; int blue = 0;

void divide(int x, int y, int size) {
    color = arr[x][y]; // 기준 칼라 설정 
    cut = false;
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (color != arr[i][j]) {
                cut = true;
                break;
            }
        }
    }

    if (cut == true) {
        divide(x, y, size / 2);
        divide(x, y + size / 2, size / 2);
        divide(x + size / 2, y, size / 2);
        divide(x + size / 2, y + size / 2, size / 2);
    }
    else {
        if (color == 1) blue++;
        else white++;
    }


}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    divide(0, 0, n);
    cout << white << "\n" << blue;
}