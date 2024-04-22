#include <bits/stdc++.h>
using namespace std;
const int maxn=1000;
int a[maxn] ;
map <int,int> mp;
void uc(int n){
	for(int i=0;i<sqrt(n);i++){
		if(n%i==0){
			mp[i]++;
			if(i!=n/i){
				mp[n/i] ++;
			} 
		} 
	} 
}  
int main(){
	int TC;
	cin>>TC;
	while(TC--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			uc(a[i]); 
		}
		int r=1; 
		for(auto it : mp){
			if(it.second >=2){
				r=it.first; 
			} 
		}
		cout < <r<<endl; 
		mp.clear(); 
	} 
	return 0; 
} 
