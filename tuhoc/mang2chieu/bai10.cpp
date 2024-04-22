#include <iostream>
#include <math.h> 
using namespace std;

int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n; cin >> n;
		int a[500][500];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			} 	
		}
		int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1; 
		while(h1 <= h2 && c1 <= c2){
			// in hang tren cung 
			for(int i = c1; i <= c2; i++){
				cout << a[h1][i] << " "; 
			} 
			h1++;
			// in cot ben phai cung 
			for(int i = h1; i <= h2; i++){
				cout << a[i][c2] << " "; 
			} 
			c2--;
			if(h1 <= h2){
			    for(int i = c2; i >=c1 ; i--){
				    cout << a[h2][i] << " ";
			    }
			    h2--; 
			}
			if(c1 <= c2){
				for(int i = h2; i >= h1; i--){
					cout << a[i][c1] << " "; 
				}
				c1++; 
			}
		} 
	}
	return 0; 
} 
