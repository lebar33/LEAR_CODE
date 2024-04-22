#include <iostream>
#include <string.h> 
using namespace std;
void chuKhongLap(string n){
	int cnt[26] = {0};
	for(int i = 0; i < n.length(); i++){
		cnt[n[i] - 'A']++; 
	}
	for(int i = 0; i < 26; i++) {
		if(cnt[i] == 1) cout << (char)(i + 'A'); 
	}
} 
int sumDigit(string n){
	int sum = 0;
	for(int i = 0; i < n.length(); i++) {
		int res = 0; 
		while(i < n.length() && isdigit(n[i])){
			res = res*10 + (int)(n[i] - '0');
			++i; 
		}
		sum+=res; 
	}
	return sum; 
} 
int sumMax(string n){
	int ans = 0; 
	for(int i = 0; i < n.length(); i++) {
		int res = 0; 
		while(i < n.length() && isdigit(n[i])){
			res = res*10 + (int)(n[i] - '0');
			++i; 
		}
		if(ans <= res) ans = res; 
	}
	return ans; 
} 
int main(){
	string n; cin >> n;
	cout << sumMax(n); 
} 
