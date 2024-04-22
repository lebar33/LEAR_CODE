#include <iostream>
#include <math.h> 
using namespace std;

// Tinh f(n) vd : n = 4 => f(4) = -1 + 2 - 3 + 4 | tuong tu voi n = 5;
int fn(int n){
	if(n % 2 == 0) return n/2;
	else return (n - 1) / 2 - n; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << fn(n) << endl; 
	}
	return 0;
} 
