#include <iostream>
using namespace std;
int main(){
    int first, second;
    cin >> first >> second; 
    cout << first*(second%10) << "\n" << first*(second%100/10)
        << "\n" << first*(second/100) << "\n" << first*second;
}