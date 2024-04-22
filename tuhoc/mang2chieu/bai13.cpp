#include <iostream>
#include <math.h> 
#include <algorithm>
using namespace std;

int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n; cin >> n;
		int b[n*n];
		for(int i = 0; i < n*n; i++){
			cin >> b[i]; 
		}
		sort(b, b + n*n);
		int a[n][n], cnt=0; 
		int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1; 
		while(h1 <= h2 && c1 <= c2){
			// in hang tren cung 
			for(int i = c1; i <= c2; i++){
				a[h1][i] = b[cnt++];
			}
			h1++;
			// in cot ben phai cung 
			for(int i = h1; i <= h2; i++){
				a[i][c2] = b[cnt++];
			} 
			c2--;
			if(h1 <= h2){
			    for(int i = c2; i >=c1 ; i--){
				    a[h2][i] = b[cnt++];
			    }
			    h2--; 
			}
			if(c1 <= c2){
				for(int i = h2; i >= h1; i--){
					a[i][c1] = b[cnt++]; 
				}
				c1++; 
			}
		} 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << a[i][j] << " "; 
			} 
			cout << endl;	
		}
	}
	return 0; 
} 
