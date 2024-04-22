#include <iostream>
#include <stdio.h> 
using namespace std;
void tentotwo(long long  n){
	if( n<2 ){
		cout << n;  
	}
	else{
	    tentotwo( n/2 );
	    cout<< n%2 ;
	}
} 
void dectohex(long long n ){
	char a[6]={'A','B','C','D','E','F'};
	if(n<16){
		if(n<10){
			cout << n; 
		} 
		else{
			cout <<a[n-10]; 
		} 
	}
	else{ 
		dectohex( n/16);
		int r=n%16;
		if(r <16){
		    if(r <10){
			    cout << r ; 
		    } 
		    else{
			    cout <<a[r -10]; 
		    } 
	    } 
	} 
}
int dcs(long n){//dem chu so cua N  
	if (n<10){
		return 1 ; 
	} 
	else {
		return 1+dcs(n/10); 
	} 
}
long TN(long n){ // tinh tong cac chu so cua N 
	if (n<10){
		return n ; 
	} 
	else {
		return n%10 +TN(n/10); 
	} 
}
int Mn(long n){ // so lon nhat trong N
	if(n<10 ){
		return n;
	}
	else{
		if((n%10)>Mn(n/10)){
			return n%10;
		}
		else{
			return Mn(n/10);
		}
	}
}
long Sm(int a[], int n){
	if(n==0){
		return 0;
	}
	else{
		if(a[n-1]%2==0){
			return a[n-1] + Sm(a,n-1);
		}
		else{
			return Sm(a,n-1);
		}
	}
}
int main(){
	int a[4]={2,4,68,1};
	cout << Sm(a,4);
	return 0;  
}
