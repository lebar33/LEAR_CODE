#include <iostream>
#include <math.h> 
using namespace std;
long long pow2(int a, int b){
	long long ans = 1;
	while(b) {
		if(b % 2 == 1){
			ans *= a; 
		} 
		b /= 2;
		a *= a; 	
	}
	return ans; 
} 
long long pow3(int a, int b){
	if(b == 0){
		return 1; 
	} 
	long long ans = pow3(a, b / 2);
	if(b % 2 == 0){
		return ans*ans ;
	} 
	else{
		return ans*ans*a; 
	} 
}
int main(){
	int a, b; cin >> a >> b;
	cout << pow2(a, b) <<" "<< pow3(a, b);  
} 
