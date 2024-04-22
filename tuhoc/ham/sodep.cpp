#include <bits/stdc++.h>

using namespace std;
bool sNt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		} 
	} 
	return a > 1 ; 
}
int f[1000]={0 };
void  fibo(){
	int   fn[20]; 
	fn[1] = 1, fn[0] = 0; 
	for(int i=2; i<= 100;i++){
		fn[i]=fn[i-1]+fn[i-2]; 
	}
	for (int i=0;fn[i]<=1000;i++) {
		f[fn[i]]=1; 
	}
}
long long sum(long long n){
	long long sum=0; 
	while(n>0){
	    sum +=n%10 ; 	
		n/=10;	
	} 
	return sum; 
}
int main(){
	int  a,b;
	cout << " NHap 2 so a b : " ;
	cin >> a >> b ;
    fibo();
	bool ok = 0  ; 
	for (int i=a;i<=b;i++){
		if(sNt(i)){
			if(f[sum(i)]==1) {
			cout << i << " ";
			ok = 1  ;
		}
		}
	}
	if (ok ==0) cout << -1 ; 
	return 0; 
} 
