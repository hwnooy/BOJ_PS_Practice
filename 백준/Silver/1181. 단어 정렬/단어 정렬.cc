#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

int main() {
    int num;
    string dict[20000];
    cin >> num;

    for (int k = 0; k < num; k++) {
        cin >> dict[k];
    }

    sort(dict, dict + num, compare);

    string* end_iter = unique(dict, dict + num);
    int cnt = end_iter - dict;

    for (int k = 0; k < cnt; k++) {
        cout << dict[k] << "\n";
    }
    
    return 0; 
}
