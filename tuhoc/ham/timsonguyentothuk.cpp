#include <iostream>
#include <math.h> 
using namespace std;
int soNtk(int k, int n){
	int dem = 0;
	for(int i = 2; i <= n; i++){
		while(n % i == 0){
			++dem;
			if(dem == k) return i;
			n /= i ;
		} 
	} 
	return -1; 
} 
int main(){
	int tc; cin >> tc;
	while(tc--){
		int n, k; cin >> n >> k ;
		cout << soNtk(k, n) << endl; 
	} 
} 
