#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int record, greet_cnt, enter_cnt;
    greet_cnt = 0, enter_cnt=0;
    string greeting;
    set<string> chat;

    cin >> record;
    cin >> greeting;
    record = record - 1;
    while (record--) {

        cin >> greeting;
        chat.insert(greeting);

        if (greeting=="ENTER"){
            enter_cnt += 1;
            greet_cnt += chat.size();
            chat.clear();
        }
    }
    greet_cnt += chat.size();
    chat.clear();
    std::cout << greet_cnt-enter_cnt;

}
