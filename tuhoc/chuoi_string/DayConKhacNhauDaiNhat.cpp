#include <iostream>
#include <string.h>
#include <algorithm> 
using namespace std;
int solve(string s){
	int cnt = 1; 
	int ans = 0; 
	for(int i = 0; i < s.length()-1;i++) {
		if (s[i] != s[i+1]) ++cnt;
		else{
			cnt = 1; 
		}
		ans = max(ans, cnt);
	}
	return ans; 
}
int solve1(string s){
	int cnt = 1; 
	int ans = 0; 
	for(int i = 0; i < s.length()-1;i++) {
		if (s[i] == s[i+1]) ++cnt;
		else{
			cnt = 1; 
		}
		ans = max(ans, cnt);
	}
	return ans; 
}
int main(){
	int t; cin >> t;
	while(t--){
		string x; cin >> x;
		cout << solve1(x) << endl;
	}
	return 0;
}
