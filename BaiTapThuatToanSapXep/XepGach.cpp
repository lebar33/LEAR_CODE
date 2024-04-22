#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int& x : a) cin >> x;
	sort(a, a+n, greater<int>());
	int docung = a[0], ans = 1;
	for(int i = 1; i < n; i++){
		if(docung < 1){
			break;
		}
		else{
			++ans;
			docung = min(docung - 1, a[i]);
		}
	}
	cout << ans << endl; 
	return 0;
} 
