#include <iostream>
#include <math.h> 
#include <algorithm> 
using namespace std;
int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n; cin >> n ;
		int a[1001][3], dem = 0;
		for(int i = 0; i < n; i++){
			int s = 0; 
			for(int j = 0; j < 3; j++){
				cin >> a[i][j];
				s += a[i][j]; 
			} 	
			if(s >= 2) ++dem; 
		} 
		 
		cout << dem << endl; 
	}
	return 0; 
} 
