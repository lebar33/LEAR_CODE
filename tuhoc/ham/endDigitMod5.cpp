#include <iostream>
#include <math.h> 
using namespace std;
int solve(string s){
	int l = s.length(), n = (s[l-2] - '0')*10 + s[l-1] - '0';
	int du = n%4;
	if(du == 0) return 4;
	return 0; 
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << solve(s) << endl; 
	}
	return 0;
} 
