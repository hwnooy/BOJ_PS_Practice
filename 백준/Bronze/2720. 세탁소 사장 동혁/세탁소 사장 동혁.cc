#include <bits/stdc++.h>
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

using namespace std;

int main(){

    int n;
    cin >> n;
    // 1 cent = 0.01 dollar
    // quarter : 0.25 / dime : 0.10 / nickel : 0.05 / penny : 0.01
    for (int i=0; i<n; i++){
        int dollar;
        cin >> dollar;
        int Qn, Dn, Nn, Pn=0;
        // 1.24 = 1 + 0

        Qn = int(dollar/QUARTER);
        dollar = dollar - Qn*QUARTER;

        Dn = int(dollar/DIME);
        dollar = dollar - Dn*DIME;

        Nn = int(dollar/NICKEL);
        dollar = dollar - Nn*NICKEL;

        Pn = int(dollar/PENNY);
        dollar = dollar - Pn*PENNY;

        cout << Qn << " " << Dn << " " << Nn << " " << Pn << "\n";
    }
}