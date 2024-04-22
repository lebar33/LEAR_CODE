#include <iostream>
using namespace std;
int is_lower(char a){
	if(a >= 'a' && a <= 'z'){
		return 1;  
	} 
	return 0; 
} 
int is_upper(char a){
	if(a >= 'A' && a <= 'Z'){
		return 1; 
	} 
	return 0; 
}
int is_alpha(char a){
	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
		return 1; 
	} 
	return 0; 
} 
char to_lower(char a){
	if(is_upper(n)){
		a+=32; 
	}
	return a; 
} 
char to_upper(char a){
	if(a >= 'a' && a <= 'z'){
		a-=32; 
	}
	return a; 
} 
int is_digit(char a){
	if(a >= '0' && a <= 'z'){
		return 1; 
	} 
	return 0 ; 
} 
int main(){
	char n; cin >> n;
	cout << is_lower(n); 
} 
