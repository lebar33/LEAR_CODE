#include <iostream>
#include <algorithm> 
using namespace std;	
int main(){
	int n; cin >> n;
	int a[n];
	for(int& x : a) cin >> x;
	for(int i = 1; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
		cout << x << " " << pos + 1 << endl;
	} 
	return 0;
} 
