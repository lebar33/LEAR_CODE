#include <iostream>
#include <math.h> 
using namespace std;
long long gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b); 
} 
long long phi(long long n){ // phi ham euler : so luong cac so nguyen to cung nhau voi n nam trong khoang tu 1 toi n  . so nguyen to cung nhau là 2 so co uoc chung lon nhat la 1  
    long long res = n;
	for (int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n/=i ;
			}
			res = res - res/i; 	// res = res*(1-1/i)
		}
	}
	if(n != 1){
		res -= res/n
	} 
	return res; 
} 
int main 
