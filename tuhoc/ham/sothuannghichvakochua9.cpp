#include <iostream>
#include <math.h> 
using namespace std;
int kTraThNg(int n){
	int r=0 , tam=n;
	while(n){
		if(n%10==9)
		    return 0;
		r=r*10+n%10;
		n/=10; 
	}
	return r==tam; 
}
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0; 
		}  
	} 
	return n>1; 
} 
int checkSoCuoiLon(int n){
	int r=n%10;
	int max1=r;
	while(n){
		r=n%10;
		if(max1 < r) {
		    return 0;
		}
		n/=10; 
	}
	return 1; 
} 
int main(){
	int a; cin >> a;
	int dem=0; 
	for (int i=2; i < a; i++){
		if(snt(i) && checkSoCuoiLon(i)){
		    cout << i << " ";
		    ++dem; 
		}
	} 
	cout << endl << dem; 
	return 0; 
} 
