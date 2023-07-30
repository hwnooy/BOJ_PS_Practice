#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> que;
    string cmd;
    int n, num, store;
    cin >> n;
    while(n--){
        cin >> cmd;
        if (cmd=="push"){
            cin >> num;
            que.push(num);
        } else if (cmd=="pop"){
            if (que.empty()){
                cout << "-1" << "\n";
            } else {
                store = que.front();
                cout << store << "\n";
                que.pop();
            }
        } else if (cmd == "size"){
            cout << que.size() << "\n";
        } else if (cmd == "empty"){
            if (que.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
        } else if (cmd=="front") {
            if (que.empty()) cout << "-1" << "\n";
            else cout << que.front() << "\n";
        } else if (cmd=="back"){
            if (que.empty()) cout << "-1" << "\n";
            else cout << que.back() << "\n";
        }
    }
    return 0;
}