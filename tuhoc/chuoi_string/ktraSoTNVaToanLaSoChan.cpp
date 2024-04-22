#include <iostream>
#include <string.h>
using namespace std;
int tn(string a) {
	int l = 0, r = a.length();
	while(l < r){
		if(a[l] != a[r] ) return 0; 
		++l; --r; 
	} 
	return 1; 
}
int check(string b){
	for(int i = 0; i < b.length(); i++){
		if((b[i]-'0')%2!=0 ) {
			return 0; 
		}
	} 
	return 1; 
} 
int solve(string a){
	int l = 0, r = a.length();
	while(l < r){
		if(a[l] != a[r]) return 0;
		if((a[l]-'0')% 2 == 1) return 0;
		++l; --r; 
	} 
	return 1; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		string a;
		cin >> a;
		if(tn(a) && check(a)) cout << "YES" << endl; 
		else cout << "NO" << endl; 
	}
	return 0; 
} 
