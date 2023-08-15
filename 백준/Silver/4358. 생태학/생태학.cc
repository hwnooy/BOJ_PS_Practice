#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string tree_name;
    int total = 0;
    map<string, int> tree;
    while (getline(cin, tree_name)) {
        total++;

        map<string, int>::iterator iter = tree.find(tree_name);
        if (iter != tree.end()) {
            iter->second += 1;
        }
        else {
            tree[tree_name] = 1;
        }
    }
    for (const auto& result : tree) {
        cout << result.first;
        cout << fixed; cout.precision(4);
        cout << " " << static_cast<double>(result.second * 100) / total << "\n";
    }

    return 0;
}
