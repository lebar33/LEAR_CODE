#include <iostream>
#include <math.h> 
using namespace std;
int solve(int n, long long k){
	int x = n/k;
	int r = n%k;
    long long sum1 = (k-1)*k/2; // tong cac so tu nhien lien tiep tu 1 toi k - 1
	long long sum2 = r*(r+1)/2; // tong cac so tu nhien lien tiep tu 1 toi r
	return sum1*x + sum2; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << solve(n, k) << endl;
	}
	return 0;
} 
