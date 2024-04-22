#include <iostream>
#include <math.h> 
using namespace std;
int solve(int a, int b){
	int r = a%b;
	if(r == 0) return 0;
	return b - r; 
}
int solveMain(int n, int k){
	int x = k/(n - 1);
	int r = k%(n - 1);
	if(r == 0) return x*n - 1;
	return x*n + r;
}

int main(){

	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		cout << solveMain(a, b) << endl;
	}
	return 0;
} 
