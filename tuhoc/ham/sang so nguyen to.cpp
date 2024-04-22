#include <iostream>
#include <math.h> 
using namespace std;
int p[1000001];
void sieve(){
	// coi all cac so tu khong toi n la so nguyen to
	// p[i] = 1
	// p[i] = 0
	for(int i = 0; i <= 1000000; i++){
		p[i] = 1; 
	} 
	p[0] = p[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(p[i]) {
			// duyet all cac boi cua p[i] va cho no khong phai la so nguyen to
			for(int j = i*i; j <= 1000000; j += i){
				p[j] = 0; // [j] khong con la so nguyen to nua 
			} 
		} 
	}
} 
int main (){
	sieve(); 
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		if(p[i]) cout << i << " "; 
	}
	return 0; 
}
