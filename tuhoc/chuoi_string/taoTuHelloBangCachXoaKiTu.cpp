#include <iostream>
#include <string.h>
using namespace std;
int isHello(string s){
	string n = "hello";
	int k = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == n[k]) ++k; 
	} 
	return k == 5; 
} 
int main(){
	string s; cin >> s;
	if(isHello(s)) cout << "yes \n";
	else cout << "no \n";
	return 0; 
} 
