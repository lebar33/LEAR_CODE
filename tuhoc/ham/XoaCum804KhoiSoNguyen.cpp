#include <iostream>
#include <math.h> 
using namespace std;
void solve(string s){
	for(int i = 0; i < s.length() - 2;i++){
		if(s[i] == '0'){
			if(s[i+1] == '8' && s[i+2] == '4'){
				s[i] = s[i+1] = s[i+2] = 'x';
			}
		}
	}
	for(int i = 0; i < s.length(); i++){
		if(s[i] != 'x') cout << s[i];
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
} 
//a[i] != s[0] || a[i] != s[2] || a[i] != s[3] ) && check[0]
