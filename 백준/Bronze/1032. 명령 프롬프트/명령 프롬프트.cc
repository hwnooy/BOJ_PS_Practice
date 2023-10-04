#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string cmd[51];
    string result = "";

    for (int i = 0; i < n; i++) {
        cin >> cmd[i];
    }

    if (n == 1) {
        cout << cmd[0];
    } else {
        int length = cmd[0].length();
        for (int j = 0; j < length; j++) {
            bool same = true;
            for (int i = 1; i < n; i++) {
                if (cmd[i][j] != cmd[0][j]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                result += cmd[0][j];
            } else {
                result += "?";
            }
        }
        cout << result;
    }

    return 0;
}
