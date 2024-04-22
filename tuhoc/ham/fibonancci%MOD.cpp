#include <iostream>
#include <math.h> 
using namespace std;
int fibo1(int n){
	if(n == 0 || n == 1) return n;
	int fn2 = 0, fn1 = 1, fn = 0;
	for(int i = 2; i <= n; i++){
		fn = fn2 + fn1;
		fn%=(int)(10^9+7);
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}

int fibo[1001];
void init(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < 1000; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
		fibo[i] %= (int)(10^9 + 7);
	}
}
int main(){
	init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << fibo[n] << endl;
	}
	return 0;
} 
