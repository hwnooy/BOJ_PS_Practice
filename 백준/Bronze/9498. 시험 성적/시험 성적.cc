//  90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F
#include <iostream>
using namespace std;
int main(){
    int num; cin >> num;
    if (num>=90) cout << "A";
    else if (num>=80) cout <<"B";
    else if (num>=70) cout << "C";
    else if (num>=60) cout << "D";
    else cout << "F";
}