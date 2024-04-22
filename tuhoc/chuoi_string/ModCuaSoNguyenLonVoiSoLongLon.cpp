#include <iostream>
#include <string.h>
using namespace std;
long long solve(string s, long long a){
	long long res = 0;
	for(int i = 0; i < s.length(); i++){
		res = (res*10 + s[i]-'0')%a; 
	}
	return res;  
} 
int main(){
	int t; cin >> t;
	while(t--){
		string a; long long b;
		cin >> a >> b; 
		cout << solve(a, b) << endl; 
	}
	return 0; 
} 
