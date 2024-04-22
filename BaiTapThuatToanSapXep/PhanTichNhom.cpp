#include <iostream>
#include <algorithm> 
using namespace std;	

int main(){
	int t; cin >> t;
	int r = t;
	while(t){
		int n, k; cin >> n >> k;
	    int a[n];
	    for(int& x : a) cin >> x;
 	    sort(a, a+n);
	    int ans = 1;
	    for(int i = 1; i < n; i++){
		    if(a[i] - a[i - 1] <= k) continue;
		    else ++ans;
    	}
	    cout << "Case#" << r - t + 1 << ": " << ans << endl;
	    t--; 
	}
	return 0;
} 
