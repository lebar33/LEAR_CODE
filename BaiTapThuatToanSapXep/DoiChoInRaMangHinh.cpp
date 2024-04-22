#include <iostream>
#include <algorithm> 
using namespace std;	
void qs(int a[], int l, int r){
	int i = l, j = r;
	int x = a[r];
	while(i <= j){
		while(a[i] < x) ++i;
		while(a[j] > x) --j;
		if(i <= j){
			swap(a[i], a[j]);
			if( i != j)cout << i + 1 << " " << j + 1 << endl;
			++i; --j;
		}
	}
	if(l < j) qs(a, l, j);
	if(i < r) qs(a, i, r);
} 
int main(){
	int n; cin >> n;
	int a[n];
	for(int& x : a) cin >> x;
	qs(a,0,n-1);
	return 0;
} 
