#include <iostream>
#include <math.h> 
using namespace std;
int UNN(int n){
	for(int i = 3; i <= n; i+=2){
		if(n%i == 0) return i; 
	}
} 
int solve(int n, int k){
	for(int i = 1; i <= k; i++){
		n += UNN(n) ; 
	} 
	return n; 
} 
int solve2(int n, int k){
	if(n%2 == 0) return n + k*2; 
	else return n + UNN(n) + (k - 1)*2; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << solve2(n, k) << endl; 
	}
	return 0;
} 
