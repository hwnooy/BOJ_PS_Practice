#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int k = 1; k <= n; k++) {
        string line;
        getline(cin, line);

        istringstream iss(line);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        cout << "Case #" << k << ": ";
        for (int i = words.size() - 1; i >= 0; i--) {
            cout << words[i];
            if (i != 0) {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
