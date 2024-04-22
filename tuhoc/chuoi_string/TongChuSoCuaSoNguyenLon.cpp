#include <iostream>
#include <string.h>
using namespace std;
int sum(string s){
	int r = 0; 
	for(int i = 0; i < s.length(); i++) {
		r+=s[i] - '0'; 
	}
	return r; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		string a;
		cin >> a;
		cout << sum(a) << endl; 
	}
	return 0; 
} 
