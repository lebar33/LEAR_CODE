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
			cin >> a[i]; 
		} 
		sort (a, a+n); 
		int dem=1; 
		for(int i = 1; i < n; i++){
			if(a[i] != a[i-1]) ++dem; 
			
		}
		cout << dem << endl;
	} 
	return 0; 
} 
