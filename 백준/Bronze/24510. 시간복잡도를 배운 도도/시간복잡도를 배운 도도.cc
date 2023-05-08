#include <iostream>
#include <string>
using namespace std;

int main() {
	int maximum = 0;
	int n_case; 
    cin >> n_case;
    
	while (n_case--) {
		string str; 
        cin >> str;
        
		int cnt = 0;
		int str_size = str.size();
		str_size -= 2;
		for (int i = 0; i < str_size; i++) if (str.substr(i, 3) == "for") cnt++;
		str_size -= 2;
		for (int i = 0; i < str_size; i++) if (str.substr(i, 5) == "while")cnt++;

		maximum = max(maximum, cnt);
	}

	cout << maximum;
}