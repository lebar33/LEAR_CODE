#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n; 
	vector<int> a[n]; 
	for(int i = 0; i < n; i++){
		int m; cin >> m;
		for (int j = 0; j < m; j++){
			int x; cin >> x;
			a[i].push_back(x);  
		} 
	} 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < a[i].size(); j++){
			cout << a[i][j]; 
		}
		cout << endl; 
	} 
	return 0; 
} 
