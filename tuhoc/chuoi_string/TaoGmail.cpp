#include <iostream>
#include <string.h>
#include <sstream>
using namespace std; 
string strlwr(string a){
	for(int i = 0; i < a.length(); i++ ){
		a[i] = tolower(a[i]); 
	}
	return a; 
} 
string tenGmail(string s){
	int k = 0;
	string a[20];
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		a[k] = tmp;
		k++; 
	}  
	for(int i = 0; i < k; i++){
		a[i] = strlwr(a[i]); 
	}
	string ans = a[k-1]; 
	for(int i = 0; i < k-1; i++){
		ans += a[i][0] ;
	} 
	ans = ans + "@gmail.com"; 
	return ans; 
} 
void tenGmail2(string s){
	int k = 0;
	string a[20];
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		a[k] = tmp;
		k++; 
	}  
	for(int i = 0; i < k; i++){
		a[i] = strlwr(a[i]); 
	}
	for(int i = 0; i < k-1; i++){
		cout << a[i][0]; 
	} 
	cout << a[k-1] << "@gmail.com"; 
}
int main(){
	string s; getline(cin, s) ;
	tenGmail2(s); 
} 
