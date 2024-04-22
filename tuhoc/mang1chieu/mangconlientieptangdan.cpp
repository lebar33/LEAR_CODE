#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
	} 
	int res = 0, d = 1, idex = 0; 
	for(int i = 1; i < n; i++) {
		if(a[i] > a[i-1]){
			++d; 
		} 
		else{
			d = 1; 
		} 
		if(d > res){
			res = d;
			idex = i - res + 1; 
		} 
	}
	for(int i = 0; i < res; i++){
		cout << a[i + idex]<< " "; 
	} 
	return 0; 
} 
