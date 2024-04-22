#include <iostream>
using namespace std;
int p[1000001];
void solve(){
	for(int i = 0; i <= 1000000; i++ ){
		p[i] = 1; 
	} 
	p[0] = p[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(p[i]==1){
			for(int j = i*i; j <= 1000000; j+=i){
				p[j] = 0; 
			} 
		} 
	} 
} 
long long bai1(int n){
	long long s = 0; 
	for(int i = 1; i <= n; i++){
		if(p[i] == 0) s+= i; 
	} 
	return s; 
} 
int main(){
	solve();
	int n ; cin >> n ;
	cout << bai1(n);
	return 0; 
} 
