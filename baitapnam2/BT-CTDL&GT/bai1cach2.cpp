#include <iostream>
#include<math.h> 
using namespace std;
int p[1000001];
int check(int n){
	for(int i = 2; i <= sqrt(n); i++ ){
		if(n % i == 0){
			return 0; 
		} 
	} 
	return n > 1; 
} 
long long bai1(int n){
	long long s = 0; 
	for(int i = 1; i <= n; i++){
		if(check(i) == 0) s+= i; 
	} 
	return s; 
} 
int main(){
	int n ; cin >> n ;
	cout << bai1(n);
	return 0; 
} 
