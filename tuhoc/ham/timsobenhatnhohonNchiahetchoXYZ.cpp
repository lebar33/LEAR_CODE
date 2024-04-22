#include <iostream>
#include <math.h>
using namespace std;
long long gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b,a%b);
}
long long bCL(int a, int b){
	return a/gcd(a,b) * b;
}
long long solve(int x, int y, int z, int n){
	long long q = bCL(x,bCL(y,z));
	long long m = pow(10,n-1);
	long long ans = (m + q - 1)/q * q;
	if( ans < pow(10, n)){
		return ans;
	}
	else return -1;
}
int main(){
	int x, y, z, n;
	cin >> x >> y >> z >> n;
	cout << solve(x, y, z, n) << endl;
}
