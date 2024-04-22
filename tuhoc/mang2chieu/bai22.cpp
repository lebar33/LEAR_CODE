#include <iostream>
#include <math.h> 
#include <algorithm> 
#include <map> 
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, a[105][105];
int ref(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 8; k++){
		int imoi = i + dx[k];
		int jmoi = j + dy[k];
		if(imoi >= 0 && imoi < n && jmoi >= 0 && jmoi < m && a[imoi][jmoi]){
			ref(imoi, jmoi);
		}
	}
}
int main(){ 
	int tc; cin>> tc;
	while(tc--){
		cin >> n >> m ;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			} 	
		}
		int dem = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j]){
					++dem;
					ref(i, j);
				}
			} 	
		}  
		cout << dem << endl; 
	}
	return 0; 
} 
