#include <iostream>
#include <math.h> 
#include <set> 
#include <map> 
using namespace std;

map  <long long, long long  > fibo ; 

void  fib(){
	long long f[93] ;
	f[0]=0 ; f[1] = 1 ;
	for(int i = 2; i <= 92; i++){ // vì long long chua duoc so fibonacci thu 92  
	    f[i] = f[i-1] + f[i-2];  
    }
    for(int i = 0; i <= 92; i++){
    	fibo[f[i]] = 1; 
	} 
} 
int main(){
	fib(); 
	int tc; cin>> tc;
	while(tc--){
		int n, m; cin >> n >> m;
		int a[500][500];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			} 	
		}
		int res = -1, col;
		long long sumold = 0; 
		for(int i = 0; i < m; i++){
			long long sumf = 0;
			int dem = 0; 
			for(int j = 0; j < n; j++){
				if(fibo.count(a[i][j]) !=0 ){
					sumf += a[i][j];
					++dem; 
				} 
			}
			if(res < dem ) {
				res = dem;
				sumold = sumf;
				col = i; 
			}
			else if( res == dem){
				if(sumold < sumf){
					sumold = sumf;
					col = i ; 
				}
			}
		}
		cout << col + 1 << endl ;
		for(int i = 0; i < n; i++){
			if(fibo.count(a[i][col]) != 0 ) {
				cout << a[i][col] << " "; 
			} 
		} 
		cout << endl; 
	}
	return 0; 
} 
