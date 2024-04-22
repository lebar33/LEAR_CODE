#include <iostream>
#include <math.h> 
using namespace std;

void solve(int n, int k){
	int x = n - k; 
	if(x == 1) cout << "NO" << endl;
    else cout << "YES" << endl; 
} 

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		solve(n, k) ; 
	}
	return 0;
} 
