#include <iostream>
using namespace std;

int main(){
    int hour, min;
    cin >> hour >> min;
    if (min>=45) cout << hour << " " << min-45;
    else {
        min=min+15;
        if(hour==0) hour=24;
        hour=hour-1;
        cout << hour <<" " << min;
    }
    
} 
