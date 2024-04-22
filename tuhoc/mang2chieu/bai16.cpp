#include <iostream>
#include <math.h> 
#include <algorithm> 
using namespace std;
long long  major[402][402] , minor[402][402] = {0};
int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n; cin >> n;
		int a[n+1][n+1];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			} 	
		} 
		for(int i = 1; i <= n ; i++){  
			for(int j = 1; j <= n; j++){ 
			    if( i == 1 || j == 1){
			    	major[i][j] = a[i][j] ;  
				}
				else {
					major[i][j] = major[i-1][j-1] + a[i][j];
				}
			} 
		}
		for(int i = 1; i <= n ; i++){  
			for(int j = n; j >= 1; j--){ 
			    if(i == 1 || j == n){
			    	minor[i][j] = a[i][j] ;  
				}
				else {
					minor[i][j] = minor[i-1][j+1] + a[i][j];
				}
			} 
		}
		long long ans = -1e18;
		for(int i = n; i >= 1; i--){
			for(int j = n; j >= 1; j--){
				for(int k = min(i,j); k >= 1; k--){
					ans = max(ans,  (major[i][j] - major[i - k][j - k]) - (minor[i][j - k + 1] - minor[i - k][j + 1]));
				}
			}
		}
		cout <<  ans << endl;
	}
	return 0; 
} 
