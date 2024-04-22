#include <iostream>
#include <math.h> 
#include <algorithm> 
#include <map> 
using namespace std;
int main(){ 
	int tc; cin>> tc;
	while(tc--){
		int n; cin >> n ;
		int a[100][100];
		map<int,int > mp; 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				mp[a[0][j]] = 1; 
			} 	
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < n; j++){
				 if(mp[a[i][j]] == i) {
				 	mp[a[i][j]] = i + 1; 
				 }
			} 	
		} 
		int dem = 0; 
		for(map<int,int> :: iterator it = mp.begin(); it != mp.end(); it++){
			if(it->second == n) {
				++dem; 
			} 
		} 
		cout << dem << endl; 
	}
	return 0; 
} 
