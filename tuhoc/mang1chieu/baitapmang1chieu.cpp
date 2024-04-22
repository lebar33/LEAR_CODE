#include <iostream >
#include <bits/stdc++.h> 
using namespace std;
int cnt[1000002]; 
int main(){
	int TC;
	cin >> TC;
	while (TC--){
		int n;
		cin >> n;
		memset(cnt,0,sizeof(cnt)); 
		for(int i=0;i<n;i++){
			int a;cin>> a;
			if(a>0){
				cnt[a]=1;  
			} 
		}
		/* for(int i=0;i<n;i++){
			if(a[i]==i){
				cout<<a[i]<<" ";
				continue; 
			} 
			else{
				cout<< -1 << " ";
				continue ; 
			} 
		} */
		for(int i=1; i<1000001;i++){
			if(cnt[i]!= 1 ){
				cout << i;
				break ; 
			} 
		} 
	} 
	return 0; 
} 
