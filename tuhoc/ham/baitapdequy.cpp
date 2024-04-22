#include <stdio.h>
#include <iostream> 
using namespace std;
void dec_to_bin(long long n){
   if(n < 2){
      cout<<n ; 
   }
   else{
      dec_to_bin(n / 2);      
      cout<< n % 2;
   }
}
void dec_to_hex(long long n ){
	if (n==10)
	    cout<<"A"; 
	if (n==11 )
	    cout<<"B"; 
	if (n==12 )
	    cout<<"C"; 
	if (n==13)
	    cout<<"D"; 
	if (n==14 )
	    cout<<"E"; 
	if (n==15 )
	    cout<<"F";
	else 
	    dec_to_hex(n/16);
		cout<<n%16; 
} 
int main(){
   dec_to_hex(762);
   return 0;
}
