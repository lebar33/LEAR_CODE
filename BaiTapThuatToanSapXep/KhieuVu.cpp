#include <iostream>
#include <algorithm> 
using namespace std;
int khieuvu(int a[], int b[], int n, int m){
	int i = 0, j = 0, ans = 0;
	while(i < n && j < m){
		if(a[i] > b[j]) {
			++ans;
			++i; ++j;
		}
		else{
			++i;
		}
	}
	return ans; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
	    int a[n], b[m];
    	for(int& x : a) cin >> x;
    	for(int& x : b) cin >> x;
    	sort(a, a+n);
    	sort(b, b+m);
    	cout << khieuvu(a, b, n, m) << endl;
	}
	return 0;
} 
