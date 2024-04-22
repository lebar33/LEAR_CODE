#include <iostream>
#include <string.h>
using namespace std;
// (a^b)%MOD = ((a%MOD)^b)%MOD
long mod(string a, long long b){
	long long du = 0;
	for(int i = 0; i < a.length(); i++){
		du = (du*10 + a[i]-'0')%b;
	}
	return du;
}
long long powMod(long long a, long long b, long long mod){
	long long res = 1;
	while(b){
		if(b % 2 == 1){
			res*=a;
			res%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;
	}
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		string a; long long b, m;
		cin >> a >> b >> m;
		long long tmp = mod(a, m); 
		cout << powMod(tmp, b, m) << endl; 
	}
	return 0; 
} 
