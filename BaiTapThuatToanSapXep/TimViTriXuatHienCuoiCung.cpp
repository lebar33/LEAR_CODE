#include <iostream>
#include <math.h> 
using namespace std;
int cuoicung(int a[], int n, int x){
	int ans = -1, l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x) {
			ans = m + 1;
			l = m + 1;
		}
		else if(a[m] < x) l = m + 1;
		else r = m - 1; 
	}
	return ans;
} 
int main(){
	int n, c; cin >> n >> c;
	int a[n];
	for(int& x : a) cin >> x;
	cout << cuoicung(a, n, c);
	return 0;
} 
