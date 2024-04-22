#include <iostream>
#include <math.h> 
#include <algorithm> 
using namespace std;
int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n, m; cin >> n >> m;
		int a[100][100];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			} 	
		} 
		int tam[n][m] = {0} ;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 1){
					for(int k = 0; k < m; k++){
						tam[i][k] = 1; 
					} 
					for(int l = 0; l < n; l++){
						tam[l][j] = 1; 
					} 
				} 
			} 	
		} 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << tam[i][j] << " "; 
			} 	
			cout << endl << endl; 
		} 
	}
	return 0; 
} 
