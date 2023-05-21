#include <iostream>
#include <queue>
#include <array>

using namespace std;

int main(){
    ios:: sync_with_stdio(0); cin.tie();
    
    priority_queue<int, vector<int>, greater<int>> wait;
    int sum, result, N, num;
    result = 0;
 
    cin >> N;

    while (N--){
        cin >> num;
        wait.push(num);
    }
    
    sum = 0;
    while(!wait.empty()){
        int temp = wait.top();
        sum = sum + temp;
        wait.pop();
        result = result + sum;
    }
    cout << result;
}