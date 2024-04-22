#include <iostream>
#include <math.h> 
using namespace std;
void solve(string a){
	int ok = 0;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == '1') ok = 1;
		else if((a[i] != '0' || a[i] != '8' || a[i] != '9')){
			ok = 0;
			break;
		}
	}
	if(ok == 0 ) {
		cout <<"INVALID" << endl;
		return;
	}
	ok = 0;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == '1') {
		    cout << "1"; 
			ok = 1;
		}
		else if(ok == 1) cout <<  "0";
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
