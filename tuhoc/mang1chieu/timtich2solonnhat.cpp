#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
	} 
	long long max1 = -1e9, max2 = -1e9, min1 = 1e9, min2 = 1e9;
	for(int i = 0; i < n; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i]; 
		} 
		else if(a[i] > max2){
			max2 = a[i]; 
		} 
		else if(a[i] < min1 ){
			min2 = min1;
			min1 = a[i]; 
		} 
		else if(a[i] < min2){
			min2 = a[i]; 
		} 
	} 
	if(min2*min1 > max2*max1) cout << min2*min1;
	else cout << max2*max1;
	return 0; 
} 
