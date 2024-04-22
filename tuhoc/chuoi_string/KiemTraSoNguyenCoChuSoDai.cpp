#include <iostream>
#include <string.h> 
using namespace std;
int symmetryCheck(string n){
	int l = 0, r = n.length()-1;
	while(l<=r){
		if(n[l]!=n[r]){
			return 0; 
		} 
		++l;
		--r; 
	} 
	return 1; 
}
int solve(string s){
	for(int i = 0; i < s.length(); i++){
		int x = s[i] - '0';
		if(x != 2 && x != 3 && x != 5 && x!=7) return 0; 
	}
	if(symmetryCheck(s) == 0) return 0;
	return 1; 
} 
int main(){
	int c; cin >> c;
	while(c--){
		string s; cin >> s;
		if(solve(s)) cout << "YES\n";
		else cout << "NO\n";
	} 
	return 0; 
} 
