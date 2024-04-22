#include <iostream>
using namespace std;
int gt(int n){
	if(n==1) return 1;
	if(n>1)  return n*gt(n-1) ; 
} 
int sumCs(int n){
	int sum=0, tam=n; 
	while(n>0){
		sum += gt(n%10);
		n/=10; 
	} 
	if(sum==tam) return 1;
	else return 0; 
} 
int main(){
	int b,c; cin >> b >> c;
	for(int i=b;i<=c;i++){
		if(sumCs(i)==1) cout << i << " "; 
	} 
} 
