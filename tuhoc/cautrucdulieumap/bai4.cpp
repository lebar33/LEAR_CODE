#include <bits/stdc++.h>
#include <set >
// multiset <int> bien  : giong nhu set nhung n� c� the cho ph�p c�c phan tu giong nhau  
using namespace std;
// s.count(n) chinh la so  luong cua phan tu n  
int main(){
	set<int > s;
	map<int,int> mp; 
	int tc; cin >> tc;
	while (tc--){
		int n, m; cin >> n;
		for(int i=0;i<n ;i++){
		    int x; cin>>x; 
		    mp[x]++; 
	    }
	    int res, fre=mp[0] ;
	    for(int i=1; i<mp.size(); i++){
	    	if(mp[i] > fre){
	    		fre = mp[i] ;
				res = i; 
			}
		}
	    cout<< res << " " << fre  ; 
	}
	
	return 0; 
} 
