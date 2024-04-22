#include <iostream>
#include <math.h> 
using namespace std;
int solve(string s){
	int l = 0, r = s.length()- 1;
	int dau = s[l] - '0', cuoi = s[r] - '0';
	if(dau == 2*cuoi || cuoi == 2*dau ){
		++l; --r;
		while(l <= r){
			if(s[l] != s[r]) return 0;
			++l; --r;
		}
		return 1;
	}
	return 0;
}
int check(int n){
	int tmp = n;
	int ans = 0;
	while(n){
		int r = n%10;
		ans = ans*10 + r;
		n/=10;
	}
	return tmp == ans;
}
int solve2(long long n){
	int c = n%10;
	long long ans = 0;
	n/=10;
	while(n>=10){
		int r = n%10;
		ans = ans*10 + r;
		n/=10;
	}
	if(c != 2*n && n != 2*c) return 0;
	return check(ans);
}
int main(){
	int t; cin >> t;
	while(t--){
		//string s; cin >> s;
		int n; cin >> n;
		if(solve2(n))cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
} 
//a[i] != s[0] || a[i] != s[2] || a[i] != s[3] ) && check[0]
