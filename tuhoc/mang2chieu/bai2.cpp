#include <iostream>
#include <math.h> 
#include <set> 
using namespace std;
int main(){
	int tc; cin>> tc;
	set <int> s; 
	while(tc--){
		int n, m; cin >> n >> m;
		int a[500][500];
		int dem[500]={0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				s.insert(a[i][j]);  
			} 	
		}
		int max1 = *(s.rbegin()); 
		cout << max1 <<  endl; 
	    for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == max1 ){
					cout << "Vi tri xuat hien : "<< "A[" << i + 1 << "][" << j + 1 << "]" << endl ;
				} 
			} 
		} 
	}
	return 0; 
} 
