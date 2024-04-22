#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j]; 
		} 
	}
	
	int p[n+1][m+1]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+a[i][j]; 
		} 
	}
	int tc;cin>>tc;
	while(tc--){
	    int h1,h2,c1,c2; cin>>h1>>c1>>h2>>c2 ;
	    cout<<p[h2][c2]-p[h1-1][c2]-p[h2][c1-1]+p[h1-1][c1-1]<<endl; 
	}
	return 0; 
} 
