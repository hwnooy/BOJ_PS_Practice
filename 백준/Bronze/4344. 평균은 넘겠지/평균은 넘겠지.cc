#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int test_case, student, sum, avg, cnt;
    int score[1000];
    double result;
    
    cin >> test_case;
    for (int k=0; k<test_case; k++){
        cin >> student;
        sum=0;
        avg = 0;
        cnt = 0;
        
        for (int i = 0; i<student; i++){
            cin >> score[i];
            sum=sum+score[i];
        }
            avg = sum/student;

        for (int i = 0; i<student; i++){
            if (score[i] > avg){
                cnt++;
            }
        }
            result = (double)cnt/student*100;
            cout << fixed << setprecision(3) << result<< "%"<<"\n";
            
            
        }
    return 0;
}