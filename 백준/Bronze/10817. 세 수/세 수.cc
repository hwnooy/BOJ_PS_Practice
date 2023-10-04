#include <iostream>
using namespace std;

int main(){
    int num[4];
    for(int k=0; k<3; k++){
        cin >> num[k];
    }
    
    for (int i=0; i<3; i++){ // 3번 반복하는 것 
        for (int j=0; j<3-(i+1); j++){
            if (num[j]>num[j+1]) {
                int tmp = num[j+1];
                num[j+1] = num[j];
                num[j] = tmp;
            }
        }
    }
    cout << num[1];
}