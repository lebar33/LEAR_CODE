#include <iostream>
#include <math.h> 
using namespace std;
long long p[1000001] = {0};
long long res[1000001] = {0};
void sieve(){
	for(long long i = 1; i <= 1000000; i++){
		p[i] = i;
	}
	for(long long i = 2; i <= 1000000; i++){
		if(p[i] == i){
			p[i] = i - 1;
			for(long long j = i*2; j <= 1000000; j+=i){
				p[j] = p[j] - p[j]/i;
			}
		}
	}
}
void sieve2(){
	for(long long i = 1; i <= 1000000; i++){
		for(long long j = i; j <= 1000000; j+=i){
			res[j]+= i*p[i]; 
		} 
	} 
}
int main(){
	int t; cin >> t;
	sieve(); sieve2();
	while(t--){
		long long n; cin >> n;
		cout << (res[n]+1)*n/2 << endl;
	}
	return 0;
} 
