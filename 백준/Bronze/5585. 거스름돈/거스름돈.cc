#include <iostream>

using namespace std;

int main(){
    int n;
    int num=0;
    cin >> n;
    
    int charge = 1000-n;
    
    if (charge >=500){
        charge = charge - 500;
        num++;
    }
    
    num = num+charge/100;
    if (charge %100 >=50){
        charge = charge -50;
        num++;
    }
    
    num = num+ (charge%100)/10;
    
    if ((charge%100)%10>=5){
        charge = charge -5;
        num++;
    }
    
    num = num+(charge%100)%10;
    cout << num << "\n";
    return 0;
}