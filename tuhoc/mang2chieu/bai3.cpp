#include <iostream>
#include <math.h> 
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
		long long  summax = -1e18 ; 
		for(int i = 0; i < n; i++){
			long long sumrow = 0 ; 
			for(int j = 0; j < m; j++){
				sumrow += a[i][j]; 
			}
		    summax=max(sumrow, summax); 
		}
		for(int i = 0; i < n; i++){
			long long sumrow = 0; 
			for(int j = 0; j < m; j++){
				sumrow += a[i][j]; 
			}
			if(sumrow  == summax){
				cout << i+1 << " "; 
			}
		}
	}
	return 0; 
} 
