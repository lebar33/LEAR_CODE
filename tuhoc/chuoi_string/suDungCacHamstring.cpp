#include <iostream>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>
using namespace std;
void bai2(string n){
	if(n.length() <= 1000){
		for(int i = 0; i < n.length(); i++){
			char x = tolower(n[i]); 
			cout << x; 
		}
    }
    /*cach 2
	n = strlwr(n);
	cout << n;  
	cach nay phai dung chuoi ki tu */
} 
void bai3(string n){
	int a = 0, d = 0 , k = 0;
	for(int i = 0; i <n.length(); i++){
		char x = n[i]; 
		if(isalpha(x)) ++a;
		else if(isdigit(x)) ++d;
		else if(x!=' ') ++k;
	} 
	cout << a << " " << d << " " << k; 
}
void bai4(string n){ 
	int c[26] = {0};
	for(int i = 0; i < n.length(); i++){
		c[n[i]- 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(c[i] != 0){
			cout << char(i+'a')<<" "<< c[i] << endl;
		}
	}
} 
void bai4C2(string n){
	int l = n.length();
	int check[l];
	for(int i = 0; i < l; i++){
		check[n[i]] = 1;
	}
	for(int i = 0; i < l; i++){
		char x = n[i];
		int dem = 1;
		if(check[n[i]] == 1){
		    for(int j = i+1; j<l; j++){
			    if(n[j] == x) ++dem;
	     	}
	     	cout << n[i] << " " << dem << endl;
	    }
		check[n[i]] = 0;
	}
}
void bai4C3(string n){
	int c[1005] = {0};
	for(int i = 0; i < n.length(); i++){
		c[n[i] - 'a']++; 
	} 
	for(int i = 0; i < n.length() ;i++){
		if(c[n[i] - 'a']!=0){
		    cout << n[i] << " " << c[n[i]-'a']<<endl;
		    c[n[i]-'a'] = 0;
		}
	} 
}
int main(){
	string n;
	cin >> n; 
    bai4C3(n); 
}
