#include <iostream>
#include <math.h> 
using namespace std;
int solve(int x, int y, int z, int n ){
	for(int i = pow(10,n-1); i < pow(10,n); i++){
		if(i % x == 0 && i % y == 0 && i % z == 0){
			return i; 
		} 
	} 
	return -1; 
} 
int main(){
	int x, y , z, n; cin >> x >> y >> z >> n;
	cout << solve(x, y, z, n) << endl ; 
} 
