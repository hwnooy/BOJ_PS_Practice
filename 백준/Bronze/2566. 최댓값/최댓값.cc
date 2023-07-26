#include <iostream>
using namespace std;

int main(){
    int vec[9][9];
    int max=0, row=0, col=0;
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            cin >> vec[i][j];
        }
    }
    max = vec[0][0];
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if (max < vec[i][j]) {
                max = vec[i][j];
                row = i; 
                col = j;
            }
        }
    }
    cout << max << "\n" << row+1 << " " << col+1 << "\n";
    
}