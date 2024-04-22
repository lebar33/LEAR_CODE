#include <bits/stdc++.h>
#include <set >
// multiset <int> bien  : giong nhu set nhung nó có the cho phép các phan tu giong nhau  
using namespace std;
// s.count(n) chinh la so  luong cua phan tu n  
int main(){
	set<int > s;
	map<int,int> mp; 
	int tc; cin >> tc;
	while (tc--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int i=0;i<n ;i++){
		    cin >> a[i];
	    }
	    for(int i=0; i<m; i++){
	    	cin >> b[i];
	    	s.insert(b[i]); 
		}  
		for(int i=0; i<n; i++){
			if(s.count(a[i]) != 0){
	            cout<< a[i] << " ";  
			}
		}
	}
	
	return 0; 
} 
