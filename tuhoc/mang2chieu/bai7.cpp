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
		for(int i = 0; i < n ; i++){
			for(int j = 0; j < m; j++){
				if(i == 0 || i == n-1 || j == 0 || j == m-1){
					cout << a[i][j] << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	return 0; 
} 
