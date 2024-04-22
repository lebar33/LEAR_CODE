#include <bits/stdc++.h>
#include <set >
#include <map> 
using namespace std;
int main(){
	set<int > s;
	map<int,int> mp ; 
	int tc; cin >> tc ;
	while (tc--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i] ;
		} 
		sort(a,a+n); 
		int q; cin >> q; 
		for(int i=0; i<q; i++){
			int x; cin >> x;
			if(binary_search(a, a+n, x) ) {
				cout << "YES\n"; 
			} 
			else {
				cout << "NO\n"; 
			} 
		} 
	} 
	return 0; 
} 
