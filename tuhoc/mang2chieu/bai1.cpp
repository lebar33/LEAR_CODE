#include <iostream>
#include <math.h> 
using namespace std;

int snt(int n){
	for(int i = 2; i <=  sqrt(n); i++){
		if(n % i == 0){
			return 0 ; 
		} 
	} 
	return n>1 ; 
} 
int main(){
	int tc; cin>> tc;
	while(tc--){
		int n, m; cin >> n >> m;
		int a[500][500];
		int dem[500]={0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			} 	
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(snt(a[i][j])==true && dem[a[i][j]] == 0){
					cout << a[i][j] << " ";
					dem[a[i][j]]=1; 
				} 
			} 
		} 
	}
	return 0; 
} 
