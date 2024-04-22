#include <iostream>
#include <math.h> 
#include <algorithm> 
using namespace std;

int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n, m; cin >> n >> m;
		int a[500][500];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			} 	
		}
		int tam[n][m]; 
		for(int i = 0; i < n ; i++){  // cho chay tu hang 1 vì hang 1 khong thay doi  
			for(int j = 0; j < m; j++){   // chay tu cot 0 vì chi thay doi tu hang tren xuong hang duoi 
			    if(i==0 && j == 0){  // cot ben trai  
			    	tam[i][j] = a[i][j]; 
				} 
				else if(i == 0) {
					tam[i][j] = tam[i][j-1] + a[i][j]; 
				}
				else if(j == 0){
					tam[i][j] = tam[i-1][j] + a[i][j]; 
				} 
				else{
					tam[i][j] = min(tam[i-1][j], tam[i][j-1]) + a[i][j]; 
				} 
			} 
		}
		cout << tam[n-1][m-1] << endl; 
	}
	return 0; 
} 
