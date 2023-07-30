#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);  
    stack<int> stk;
    int n, num, store;
    string command;
    cin >> n;
    
    while(n--){
        cin >> command;
        
        if(command=="push"){
            cin >> num;
            stk.push(num);
        }
        else if(command=="pop"){
            if (stk.empty()){
                cout << "-1" << "\n";
            }
            else{
                cout << stk.top()<< "\n";
                stk.pop();
            }
        }
        else if(command=="size"){
            cout << stk.size()<< "\n";
        }
        else if(command=="empty"){
            if(stk.empty()) cout <<"1"<< "\n";
            else cout << "0"<< "\n";
        }
        else if (command == "top"){
            if(stk.empty()) cout << "-1"<< "\n";
            else cout << stk.top() << "\n";
        }       
    }    
    return 0;
}