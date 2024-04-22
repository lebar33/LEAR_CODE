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
		for(int i = 1; i < n ; i++){  // cho chay tu hang 1 vì hang 1 khong thay doi  
			for(int j = 0; j < m; j++){   // chay tu cot 0 vì chi thay doi tu hang tren xuong hang duoi 
			    if(j==0){  // cot ben trai  
			    	a[i][j] += max(a[i-1][j], a[i-1][j+1]); 
				} 
				else if(j == m-1){
					a[i][j] += max(a[i-1][j], a[i-1][j-1]); 
				} 
				else {
					a[i][j] += max(a[i-1][j], max(a[i-1][j-1], a[i-1][j+1])); 
				} 
			} 
		}
		cout << *max_element(a[n-1], a[n-1] + m ) << endl; 
	}
	return 0; 
} 
