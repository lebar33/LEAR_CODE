#include <iostream>
#include <math.h> 
using namespace std;

int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n,m; cin >> n >> m;
		int a[100][100];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			} 	
		}
		int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1; 
		while(h1 < h2 && c1 < c2){
			int truoc = a[h1+1][c1];
			for(int i = c1; i <= c2; i++){
				int sau = a[h1][i];
				a[h1][i] = truoc ;
				truoc = sau;  
			} 
			h1++;
			// in cot ben phai cung 
			for(int i = h1; i <= h2; i++){
				int sau = a[i][c2];
				a[i][c2] = truoc ;
				truoc = sau ; 
			} 
			c2--;
			if(h1 <= h2){
			    for(int i = c2; i >=c1 ; i--){
				    int sau = a[h2][i] ;
				    a[h2][i] = truoc ;
				    truoc = sau ;
			    }
			    h2--; 
			}
			if(c1 <= c2){
				for(int i = h2; i >= h1; i--){
					int sau = a[i][c1] ;
					a[i][c1] = truoc ;
					truoc = sau ; 
				}
				c1++; 
			}
		}
		for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	} 
	}
	return 0; 
} 	
