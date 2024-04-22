#include <bits/stdc++.h>
using namespace std;
const int maxn=100000;
int a[maxn],n  ;
map <int,int> mp;
int gcd(int a, int b){
	if(b==0){
		return a; 
	}
	return gcd(b,a%b); 
}
int main(){
	int TC;
	cin>>TC;
	while(TC--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		/*int r=0;  #bai2 
		for(int i=0;i<n;i++){
			r=gcd(r,a[i]); 
		}
		int dem=1;
		if(r==1){
			cout<<0 << endl;
			continue ; 
		} 
		for(int i=2;i<sqrt(r);i++){
			if(r%i==0){
				dem++;
				if(i!=r/i) dem ++; 
			} 
		}
		cout<<dem << endl;*/
		
		/* #bai3 long long  sr=0,sl=0; 
		for(int i=0;i<n;i++){
		 	sr+=a[i]; 
		}
		bool kt=true; 
		for(int i=0;i<n;i++){
			sr-=a[i];
			if(sr==sl){
				cout << i << endl;
				kt=false; 
			}
			sl+=a[i];
		}
		if(kt) cout << -1 << endl; */
		
		/* #bai4 int ans=a[0]; 
		for (int i=1;i<n;i++){
			ans=ans^a[i]; 
		}
		cout << ans << endl ; */
		
		int dem=1,r=0;
		for(int i=1;i<n;i++){
			if(a[i]==a[i-1]){
				++dem; 
			} 
			else{
				dem=0; 
			}
			r=max(r,dem); 
		} 
		cout << n-r << endl; 
	} 
	return 0; 
} 
