#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);  cin.tie(0); 
    int siteN, findM;
    unordered_map<string, string> site;
    cin >> siteN >> findM;
    for (int i=0; i<siteN; i++){
        string name, value;
        cin >> name >> value; 
        site.insert({name, value});
    }
    for (int j=0; j<findM; j++){
        string name;
        cin >> name;
        if (site.find(name)!=site.end()){
            cout << site[name] << "\n";
        }
    }
}