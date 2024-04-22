#include <iostream>
#include <string.h>
using namespace std;
int val[7] = {1, 5, 10, 50, 100, 500, 1000};
string s = "IVXLCDM";
int check(char c){
	for(int i = 0; i < 7; i++){
		if(s[i] == c) return i;
	}
}
int solve(string str){
	int n = str.length();
	int ans = val[check(str[n-1])];
	for(int i = n-1; i > 0; i--){
		int idex1 = check(str[i]);
		int idex2 = check(str[i-1]);
		if(val[idex1] <= val[idex2]) ans+=val[idex2];
		else ans -= val[idex2];
	}
	return ans;
}
int main(){
	int t; cin >> t;
	while(t--){
		string x; cin >> x;
		cout << solve(x) << endl;
	}
	return 0;
}
