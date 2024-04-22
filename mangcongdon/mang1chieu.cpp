#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	int p[n+1];
	for(int i=1;i<=n;i++){
		p[i]=p[i-1]+a[i]; 
	}
	int l,r; cin>>l>>r ;
	cout<<p[r]-p[l-1]<<endl; 
	return 0; 
} 
