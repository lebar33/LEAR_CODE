#include <iostream>
#include <string.h>
using namespace std;
long long mod(string s, long long a){
	long long res = 0;
	for(int i = 0; i < s.length(); i++){
		res = (res*10 + s[i]-'0')%a; 
	}
	return res;  
} 
long long gcd(long long a, long long b){ 
    if(b == 0) return a;
	return gcd(b, a%b) ;
} 
int main(){
	int t; cin >> t;
	while(t--){
		string a; long long b;
		cin >> a >> b;
		long long du = mod(a, b); 
		cout << gcd(b, du) << endl; 
	}
	return 0; 
} 
