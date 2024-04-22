#include <iostream>
#include <math.h> 

using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
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
		int r[500][500];
		for(int i = 0; i < n ; i++){
			for(int j = 0; j < m; j++){
				long long sum = 0;
				for(int k = 0; k < 8; k++){
					int imoi = i + dx[k];
					int jmoi = j + dy[k];
					if(imoi >=0 && imoi <n && jmoi >=0 && jmoi < m){
						sum += a[imoi][jmoi];
					}
				}
				r[i][j] = sum + a[i][j];
			} 
		}
		cout << endl; 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << r[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0; 
} 
