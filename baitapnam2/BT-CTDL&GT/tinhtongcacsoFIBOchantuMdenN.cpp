#include <iostream>
using namespace std;
int f[100000000];
int fibo[40] ;
void ktao(){
	fibo[0] = 0; fibo[1] = 1;
	for(int i = 2; i < 40; i++ ){
		fibo[i] = fibo[i-1] + fibo[i-2]; 
	} 
	for(int i = 0; fibo[i] < 100000000; i++) {
		if(fibo[i] % 2 == 0 ){
			f[fibo[i]] = 1; 
		} 
	}
} 
long long bai2(int m, int n){
	long long s = 0; 
	for(int i = m; i <= n; i++){
		if(f[fibo[i]]) s+= fibo[i]; 
	}
	return s; 
} 
int main(){
	ktao() ;
	int m, n ; cin >> m >> n ;
	if(m < n && n <= 40){
		cout << "ok" << endl ; 
		cout << bai2(m-1 , n-1);
	} 
	return 0; 	
} 
