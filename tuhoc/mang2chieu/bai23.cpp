#include <iostream>
#include <math.h> 
#include <algorithm>
using namespace std;

int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n,m; cin >> n >> m;
		int a[500][500];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			} 	
		}
		int dd[n][m] ;
		for(int i = 0; i < n; i++){
			dd[i][0] = a[i][0];
		}
		for(int i = 0; i < m; i++){
			dd[0][i] = a[0][i];
		}
		for(int i = 1; i < n; i++){
			for(int j = 1; j < m; j++){
				if(a[i][j]){
					dd[i][j] = min(dd[i-1][j-1], min(dd[i-1][j], dd[i][j-1])) + 1;
				}
				else{
					dd[i][j] = 0;
				}
			}
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				ans = max(ans, dd[i][j]);
			}
		}
		cout << ans << endl;
	}
	return 0; 
} 	
